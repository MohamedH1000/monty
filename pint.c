#include "monty.h"
/**
 * f_pi - a function that the top get printed
 * @h: head of a stack
 * @count: number of line
 * Return: nothing to return
*/
void f_pi(stack_t **h, unsigned int count)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
