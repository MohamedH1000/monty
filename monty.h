#ifndef _MONTY_H
#define _MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct cont - a struct that contains
 * variables -args, file, line content
 * @arg: arg value
 * @file: monty file pointer
 * @content: content of a line
 * @lifi: its something like flag change stack <-> queue
 * Description: the program carries value through
 */
typedef struct cont
{
	int lifi;
	char *arg;
	FILE *file;
	char *content;
} cont_t;
extern cont_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_real(char *p, unsigned int o_s, unsigned int n_s);
ssize_t gs(char **lp, int f);
char  *c_l(char *cont);
void f_pu(stack_t **h, unsigned int num);
void f_pa(stack_t **h, unsigned int num);
void f_pi(stack_t **h, unsigned int num);
int exe(char *cont, stack_t **h, unsigned int count, FILE *file);
void f_s(stack_t *h);
void f_po(stack_t **h, unsigned int count);
void f_sw(stack_t **h, unsigned int count);
void f_ad(stack_t **h, unsigned int count);
void f_no(stack_t **h, unsigned int count);
void f_su(stack_t **head, unsigned int counter);
void f_di(stack_t **h, unsigned int count);
void f_mu(stack_t **h, unsigned int count);
void f_mo(stack_t **h, unsigned int count);
void f_pc(stack_t **h, unsigned int count);
void f_ps(stack_t **h, unsigned int count);
void f_ro(stack_t **h, unsigned int count);
void f_rot(stack_t **h, __attribute__((unused)) unsigned int count);
void adn(stack_t **h, int n);
void adq(stack_t **h, int n);
void f_q(stack_t **h, unsigned int count);
void f_stack(stack_t **h, unsigned int count);
#endif
