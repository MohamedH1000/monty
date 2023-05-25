#include "monty.h"
/**
 * f_mu - a function that the top two elements of the stack
 * to be multiplied
 * @h: a head of the stack
 * @count: number of lines
 * Return: nothing to return
*/
void f_mu(stack_t **h, unsigned int count)
{
	stack_t *b;
	int l = 0, au;

	b = *h;
	while (b)
	{
		b = b->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	b = *h;
	au = b->next->n * b->n;
	b->next->n = au;
	*h = b->next;
	free(b);
}
