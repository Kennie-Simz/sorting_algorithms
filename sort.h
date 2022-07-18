#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - doubly linked list node
 *
 * @n: integer stored in node
 * @prev: pointer to previous element on the list
 * @next: pointer to next element on the list
 *
 **/

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);


#endif /**SORT_HEADER**/