#include "sort.h"
#include <stdio.h>
#include <limits.h>

void insert_min_node_head(listint_t **list);
void print_forward(listint_t *list);
void print_back(listint_t *list);

/**
 * insertion_sort_list - sorts a doubly linked list of integers using insertion sort
 * @list: address of the head of the list
 *
 * Description: sorts a doubly linked list of integers using insertion sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *p, *prev, *next, *tmp;

	insert_min_node_head(list);

	cur = (*list)->next;

	while (cur)
	{
		tmp = cur->next;
		p = cur->prev;

		while (p)
		{
			if (p->n > cur->n)
			{
			}
			p = p->prev;
		}
		cur = tmp;

		(void) next;
		(void) prev;
	}
}

void insert_min_node_head(listint_t **list)
{
	listint_t *node;
	int *tmp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return;
	tmp = (int *)&node->n;
	*tmp = INT_MIN;
	(*list)->prev = node;
	node->next = *list;
	node->prev = NULL;
	*list = node;
}
