#include "monty.h"
/**
 * f_sw - a function that
 * add the two top elements of a stack
 * @h: head of the stack
 * @count: numbe rof line
 * Return: nothing to return
*/
void f_sw(stack_t **h, unsigned int count)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	b = *h;
	au = b->n;
	b->n = b->next->n;
	b->next->n = au;
}
