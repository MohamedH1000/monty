#include "monty.h"
/**
 * f_pc - a function that a top of a stack
 * print the char followed then by a new line
 * @h: head of a stack
 * @count: number of lines
 * Return: nothing to return
*/
void f_pc(stack_t **h, unsigned int count)
{
	stack_t *b;

	b = *h;
	if (!b)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	if (b->n > 127 || b->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", b->n);
}
