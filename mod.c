#include "monty.h"
/**
 * f_mo - a function the computes the remaining of
 * the second top of the stack divided by the top
 * of the stack
 * @h: ht ehead stack
 * @count: number of lines
 * Return: nothing to return
*/
void f_mo(stack_t **h, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	b = *h;
	if (b->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	au = b->next->n % b->n;
	b->next->n = au;
	*h = b->next;
	free(b);
}
