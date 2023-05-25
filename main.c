#include "monty.h"
cont_t bus = {0, NULL, NULL, 0};
/**
* main - a main function that
* interpret the monty code
* @argc: the arguments number
* @argv: thee array of arguments location of monty
* Return: in the case of success it return 0
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *file;
	size_t s = 0;
	ssize_t r_l = 1;
	stack_t *stk = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_l > 0)
	{
		cont = NULL;
		r_l = getline(&cont, &s, file);
		bus.content = cont;
		count++;
		if (r_l > 0)
		{
			exe(cont, &stk, count, file);
		}
		free(cont);
	}
	f_s(stk);
	fclose(file);
return (0);
}
