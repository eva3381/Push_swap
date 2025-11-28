/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evafletefolgueira <evafletefolgueira@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 00:25:56 by evafletefol       #+#    #+#             */
/*   Updated: 2025/11/29 00:25:59 by evafletefol      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Proyecto push_swap - Estructura completa en un único documento
// Cada fichero está separado por comentarios indicando su ruta

/****************************** Makefile ******************************/
// File: Makefile

# Simple Makefile para push_swap
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = \
    push_swap.c \
    src/utils/parse.c \
    src/utils/errors.c \
    src/utils/list_utils.c \
    src/utils/index.c \
    src/ops/swap.c \
    src/ops/push.c \
    src/ops/rotate.c \
    src/ops/reverse_rotate.c \
    src/algo/chunks.c \
    src/algo/push_to_b.c \
    src/algo/push_to_a.c

OBJS = $(SRCS:.c=.o)
INCLUDES = -I includes -I libft

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(CFLAGS) $(OBJS) libft/libft.a -o $(NAME)

clean:
	make clean -C libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

/****************************** push_swap.h ******************************/
// File: includes/push_swap.h

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

typedef struct s_node
{
    int value;
    int index;
    struct s_node *next;
}   t_node;

// utils
void    error_exit(void);
t_node  *new_node(int n);
void    append_node(t_node **stack, t_node *new);
int     stack_size(t_node *a);
int     is_sorted(t_node *a);
void    assign_indices(a, size);
    if (size == 2 && !is_sorted(a)) sa(&a);
    else if (size == 3) { sort_3(&a); return (free_stack(&a), 0); }
    else if (size <= 5) { sort_5(&a, &b); free_stack(&a); return 0; }
    assign_indices(a, size);(t_node *a, int size);
void    free_stack(t_node **s);
t_node  *parse_args(int ac, char **av);

// ops
void    sa(t_node **a);
void    sb(t_node **b);
void    ss(t_node **a, t_node **b);
void    pa(t_node **a, t_node **b);
void    pb(t_node **a, t_node **b);
void    ra(t_node **a);
void    rb(t_node **b);
void    rr(t_node **a, t_node **b);
void    rra(t_node **a);
void    rrb(t_node **b);
void    rrr(t_node **a, t_node **b);

// algo
void    sort_chunks(t_node **a, t_node **b, int size);
void    push_to_b(t_node **a, t_node **b, int chunk, int size);
void    push_back_to_a(t_node **a, t_node **b);

#endif

/****************************** push_swap.c ******************************/
// File: push_swap.c

#include "push_swap.h"

int main(int ac, char **av)
{
    t_node *a;
    t_node *b;
    int size;

    if (ac < 2)
        return (0);
    a = parse_args(ac, av);
    b = NULL;
    size = stack_size(a);
    if (is_sorted(a))
        return (free_stack(&a), 0);
    assign_indices(a, size);
    sort_chunks(&a, &b, size);
    free_stack(&a);
    return (0);
}

/****************************** utils: parse.c ******************************/
// File: src/utils/parse.c

#include "push_swap.h"

static long ft_atol_ps(const char *s)
{
    long sign = 1;
    long n = 0;
    int i = 0;

    if (s[i] == '+' || s[i] == '-')
        if (s[i++] == '-')
            sign = -1;
    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            error_exit();
        n = n * 10 + (s[i] - '0');
        if ((n * sign) > 2147483647 || (n * sign) < -2147483648)
            error_exit();
        i++;
    }
    return (n * sign);
}

static void check_duplicates(t_node *a, int value)
{
    while (a)
    {
        if (a->value == value)
            error_exit();
        a = a->next;
    }
}

t_node *parse_args(int ac, char **av)
{
    t_node *a = NULL;
    int i = 1;
    char **split;
    int j;

    while (i < ac)
    {
        split = ft_split(av[i], ' ');
        if (!split)
            error_exit();
        j = 0;
        while (split[j])
        {
            long n = ft_atol_ps(split[j]);
            check_duplicates(a, n);
            append_node(&a, new_node((int)n));
            j++;
        }
        ft_free_split(split);
        i++;
    }
    return (a);
}

/****************************** utils: errors.c ******************************/
// File: src/utils/errors.c

#include "push_swap.h"

void error_exit(void)
{
    write(2, "Error\n", 6);
    exit(1);
}

/****************************** utils: list_utils.c ******************************/
// File: src/utils/list_utils.c

#include "push_swap.h"

t_node *new_node(int n)
{
    t_node *node = malloc(sizeof(t_node));
    if (!node)
        error_exit();
    node->value = n;
    node->index = -1;
    node->next = NULL;
    return (node);
}

void append_node(t_node **stack, t_node *new)
{
    t_node *temp;

    if (!*stack)
        return (*stack = new, (void)0);
    temp = *stack;
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}

int stack_size(t_node *a)
{
    int i = 0;
    while (a && ++i)
        a = a->next;
    return (i);
}

void free_stack(t_node **s)
{
    t_node *tmp;
    while (*s)
    {
        tmp = (*s)->next;
        free(*s);
        *s = tmp;
    }
}

int is_sorted(t_node *a)
{
    while (a && a->next)
    {
        if (a->value > a->next->value)
            return (0);
        a = a->next;
    }
    return (1);
}

/****************************** utils: index.c ******************************/
// File: src/utils/index.c

#include "push_swap.h"

void assign_indices(t_node *a, int size)
{
    t_node *min;
    t_node *cur;
    int idx = 0;

    while (++idx <= size)
    {
        min = NULL;
        cur = a;
        while (cur)
        {
            if (cur->index == -1 && (!min || cur->value < min->value))
                min = cur;
            cur = cur->next;
        }
        if (min)
            min->index = idx;
    }
}

/****************************** ops: swap.c ******************************/
// File: src/ops/swap.c

#include "push_swap.h"

static void swap_nodes(t_node **s)
{
    t_node *a;
    t_node *b;
    if (!*s || !(*s)->next)
        return;
    a = *s;
    b = a->next;
    a->next = b->next;
    b->next = a;
    *s = b;
}

void sa(t_node **a) { swap_nodes(a); write(1, "sa\n", 3); }
void sb(t_node **b) { swap_nodes(b); write(1, "sb\n", 3); }
void ss(t_node **a, t_node **b) { swap_nodes(a); swap_nodes(b); write(1, "ss\n", 3); }

/****************************** ops: push.c ******************************/
// File: src/ops/push.c

#include "push_swap.h"

static void push_node(t_node **src, t_node **dst)
{
    t_node *tmp;
    if (!*src)
        return;
    tmp = (*src)->next;
    (*src)->next = *dst;
    *dst = *src;
    *src = tmp;
}

void pa(t_node **a, t_node **b) { push_node(b, a); write(1, "pa\n", 3); }
void pb(t_node **a, t_node **b) { push_node(a, b); write(1, "pb\n", 3); }

/****************************** ops: rotate.c ******************************/
// File: src/ops/rotate.c

#include "push_swap.h"

static void rotate(t_node **s)
{
    t_node *first;
    t_node *tmp;

    if (!*s || !(*s)->next)
        return;
    first = *s;
    *s = first->next;
    tmp = *s;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = first;
    first->next = NULL;
}

void ra(t_node **a) { rotate(a); write(1, "ra\n", 3); }
void rb(t_node **b) { rotate(b); write(1, "rb\n", 3); }
void rr(t_node **a, t_node **b) { rotate(a); rotate(b); write(1, "rr\n", 3); }

/****************************** ops: reverse_rotate.c ******************************/
// File: src/ops/reverse_rotate.c

#include "push_swap.h"

static void rev_rotate(t_node **s)
{
    t_node *prev = NULL;
    t_node *cur = *s;

    if (!*s || !(*s)->next)
        return;
    while (cur->next)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = NULL;
    cur->next = *s;
    *s = cur;
}

void rra(t_node **a) { rev_rotate(a); write(1, "rra\n", 4); }
void rrb(t_node **b) { rev_rotate(b); write(1, "rrb\n", 4); }
void rrr(t_node **a, t_node **b) { rev_rotate(a); rev_rotate(b); write(1, "rrr\n", 4); }

/****************************** algo: chunks.c ******************************/
// File: src/algo/chunks.c

#include "push_swap.h"

void sort_3(t_node **a);
void sort_5(t_node **a, t_node **b);

void sort_chunks(t_node **a, t_node **b, int size)
{
    int chunk = (size <= 100) ? 20 : 40;
    push_to_b(a, b, chunk, size);
    push_back_to_a(a, b);
}

/****************************** algo: push_to_b.c ******************************/
// File: src/algo/push_to_b.c

#include "push_swap.h"

void push_to_b(t_node **a, t_node **b, int chunk, int size)
{
    int limit = chunk;
    int pushed = 0;

    while (pushed < size)
    {
        if ((*a)->index <= limit)
        {
            pb(a, b);
            pushed++;
            if ((*b)->index > limit - (chunk / 2))
                rb(b);
        }
        else
            ra(a);
        if (pushed == limit)
            limit += chunk;
    }
}

/****************************** algo: push_to_a.c ******************************/
// File: src/algo/push_to_a.c

#include "push_swap.h"

static int find_max(t_node *b)
{
    int max = 0;
    while (b)
    {
        if (b->index > max)
            max = b->index;
        b = b->next;
    }
    return (max);
}

static int pos_of(t_node *b, int max)
{
    int pos = 0;
    while (b)
    {
        if (b->index == max)
            return (pos);
        pos++;
        b = b->next;
    }
    return (pos);
}

void push_back_to_a(t_node **a, t_node **b)
{
    while (*b)
    {
        int max = find_max(*b);
        int pos = pos_of(*b, max);
        int size = stack_size(*b);

        if (pos <= size / 2)
            while ((*b)->index != max)
                rb(b);
        else
            while ((*b)->index != max)
                rrb(b);
        pa(a, b);
    }
}
