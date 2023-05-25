#include "monty.h"
/**
  *f_ro- a function that the stack is rotated
  *to the top
  *@h: the head of the stack
  *@count: number of lines
  *Return: nothing to return
 */
void f_ro(stack_t **h,  __attribute__((unused)) unsigned int count)
{
	stack_t *temp = *h, *au;

	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	au = (*h)->next;
	au->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *h;
	(*h)->next = NULL;
	(*h)->prev = temp;
	(*h) = au;
}
