#include "monty.h"
/**
 * f_po - a function that the top get
 * printed
 * @h: head of the stack
 * @count: number of line
 * Return: nothing to return
*/
void f_po(stack_t **h, unsigned int count)
{
	stack_t *b;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	b = *h;
	*h = b->next;
	free(b);
}
