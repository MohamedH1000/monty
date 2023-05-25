#include "monty.h"
/**
* exe - the opcode to be executed
* @s: stack head linked list
* @count: counter of a line
* @file: monty file pointer
* @cont: content of a line
* Return: nothing returned
*/
int exe(char *cont, stack_t **s, unsigned int count, FILE *file)
{
	instruction_t fruit[] = {
				{"push", f_pu}, {"pall", f_pa}, {"pint", f_pi},
				{"pop", f_po},
				{"swap", f_sw},
				{"add", f_ad},
				{"nop", f_no},
				{"sub", f_su},
				{"div", f_di},
				{"mul", f_mu},
				{"mod", f_mo},
				{"pchar", f_pc},
				{"pstr", f_ps},
				{"rotl", f_ro},
				{"rotr", f_rot},
				{"queue", f_q},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int a = 0;
	char *opeka;

	opeka = strtok(cont, " \n\t");
	if (opeka && opeka[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (fruit[a].opcode && opeka)
	{
		if (strcmp(opeka, fruit[a].opcode) == 0)
		{	fruit[a].f(s, count);
			return (0);
		}
		a++;
	}
	if (opeka && fruit[a].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, opeka);
		fclose(file);
		free(cont);
		f_s(*s);
		exit(EXIT_FAILURE); }
	return (1);
}
