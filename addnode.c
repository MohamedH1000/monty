#include "monty.h"
/**
 * adn - a function that add to the head of stack
 * a node
 * @h: the stack head
 * @n: the new value
 * Return: nothing to return
*/
void adn(stack_t **h, int n)
{

	stack_t *n_n, *aux;

	aux = *h;
	n_n = malloc(sizeof(stack_t));
	if (n_n == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = n_n;
	n_n->n = n;
	n_n->next = *h;
	n_n->prev = NULL;
	*h = n_n;
}
