#include "monty.h"
/**
  *f_rot - a function that the stack is rotated
  * to the bottom
  *@h: head of the stack
  *@count: number of lines
  *Return: nothing to return
 */
void f_rot(stack_t **h, __attribute__((unused)) unsigned int count)
{
	stack_t *cop;

	cop = *h;
	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	while (cop->next)
	{
		cop = cop->next;
	}
	cop->next = *h;
	cop->prev->next = NULL;
	cop->prev = NULL;
	(*h)->prev = cop;
	(*h) = cop;
}
