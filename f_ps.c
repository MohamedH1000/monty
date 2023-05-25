#include "monty.h"
/**
 * f_ps - a function that the string at the top of
 * the stack to be printed
 * @h: the head of a stack
 * @count: number of lines
 * Return: nothing to return
*/
void f_ps(stack_t **h, unsigned int count)
{
	stack_t *b;
	(void)count;

	b = *h;
	while (b)
	{
		if (b->n > 127 || b->n <= 0)
		{
			break;
		}
		printf("%c", b->n);
		b = b->next;
	}
	printf("\n");
}
