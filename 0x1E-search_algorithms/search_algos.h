#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer number
 * @index: Index of the node in the list
 * @next: point in the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listin_s *next;
} listint_t;
/**
 * struct skiplist_s - singly linked list with an express lane
 *  @n: Integer number
 *  @index: Index of the node in the list
 *  @next: point in the next node
 *  @express: point in the next node in the express lane
 *  Description: singly linked list node structure with an express
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
