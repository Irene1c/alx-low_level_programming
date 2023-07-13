#include "search_algos.h"

/**
 * BinarySearch - Binary search algorithm
 * @arr: pointer to the first element of the array to search in
 * @left: leftmost index
 * @right: rightmost index
 * @val: value to search for
 * Return: index of val or -1
 */
int BinarySearch(int *arr, int left, int right, int val)
{
	int mid, i;

	if (right >= left)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right - 1; i++)
		{
			printf("%d, ", arr[i]);
		}
		if (i == right)
			printf("%d", arr[i]);
		printf("\n");

		if (arr[mid] == val)
			return (mid);

		if (arr[mid] > val)
		{
			return (BinarySearch(arr, left, mid - 1, val));
		}
		return (BinarySearch(arr, mid + 1, right, val));
	}
	return (-1);
}

/**
 * binary_search - function that searches for a value in a sorted
 *  array of integers using the Binary search algorithm
 *  You can assume that array will be sorted in ascending order
 *  You can assume that value won’t appear more than once in array
 *  @array: pointer to the first element of the array to search in
 *  @size: number of elements in array
 *  @value: value to search for
 *  Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (BinarySearch(array, 0, size - 1, value));
}
