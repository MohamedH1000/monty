#include "monty.h"
/**
 * f_di - the top two elements of a stack
 * to be divided
 * @h: head of a stack
 * @count: number of line
 * Return: nothing to return
*/
void f_di(stack_t **h, unsigned int count)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
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
	au = b->next->n / b->n;
	b->next->n = au;
	*h = b->next;
	free(b);
}
