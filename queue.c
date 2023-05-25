#include "monty.h"
/**
 * f_q - a function that the top to be
 * printed
 * @h: the head of a stack
 * @count: number of lines
 * Return: nothing to return
*/
void f_q(stack_t **h, unsigned int count)
{
	(void)h;
	(void)count;
	bus.lifi = 1;
}
/**
 * adq - a function that the tail of node stack
 * to be added
 * @n: the new value
 * @h: the stack head
 * Return: nothing to be returned
*/
void adq(stack_t **h, int n)
{
	stack_t *n_n, *au;

	au = *h;
	n_n = malloc(sizeof(stack_t));
	if (n_n == NULL)
	{
		printf("Error\n");
	}
	n_n->n = n;
	n_n->next = NULL;
	if (au)
	{
		while (au->next)
			au = au->next;
	}
	if (!au)
	{
		*h = n_n;
		n_n->prev = NULL;
	}
	else
	{
		au->next = n_n;
		n_n->prev = au;
	}
}
