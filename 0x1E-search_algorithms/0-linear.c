#include "search_algos.h"
/**
 * linear_search - search for an element in an array
 * @array: the array to search in
 * @size:the  size of the array
 * @value: the target value to find
 * @Return: the index of the value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
