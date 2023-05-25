#include "monty.h"
/**
 * f_pa - a function that the stack
 * will be printed with
 * @h: head of the stack
 * @count: dont be used
 * Return: nothing returned
*/
void f_pa(stack_t **h, unsigned int count)
{
	stack_t *b;
	(void)count;

	b = *h;
	if (b == NULL)
		return;
	while (b)
	{
		printf("%d\n", b->n);
		b = b->next;
	}
}
