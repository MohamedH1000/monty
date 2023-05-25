#include "monty.h"
/**
 * f_pu - a function that add to stack a node
 * @h: stack head
 * @count: number line
 * Return: nothing
*/
void f_pu(stack_t **h, unsigned int count)
{
	int n, b = 0, sign = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			b++;
		for (; bus.arg[b] != '\0'; b++)
		{
			if (bus.arg[b] > 57 || bus.arg[b] < 48)
				sign = 1; }
		if (sign == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			f_s(*h);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		adn(h, n);
	else
		adq(h, n);
}
