#include "monty.h"
/**
 * f_ad - a function that add
 * two elements of a stack
 * @h: the head of a stack
 * @count: number of line
 * Return: nothing to be returned
*/
void f_ad(stack_t **h, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	b = *h;
	au = b->n + b->next->n;
	b->next->n = au;
	*h = b->next;
	free(b);
}
