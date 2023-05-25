#include "monty.h"
/**
* f_s - a function that free a stack of
* doubly linked list
* @h: the list head
*/
void f_s(stack_t *h)
{
	stack_t *au;

	au = h;
	while (h)
	{
		au = h->next;
		free(h);
		h = au;
	}
}
