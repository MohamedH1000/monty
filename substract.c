#include "monty.h"
/**
  *f_su- a function that do a substraction
  *@h: head of the stack
  *@count: number of line
  *Return: nothing to return
 */
void f_su(stack_t **h, unsigned int count)
{
	stack_t *au;
	int su, no;

	au = *h;
	for (no = 0; au != NULL; no++)
		au = au->next;
	if (no < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		f_s(*h);
		exit(EXIT_FAILURE);
	}
	au = *h;
	su = au->next->n - au->n;
	au->next->n = su;
	*h = au->next;
	free(au);
}
