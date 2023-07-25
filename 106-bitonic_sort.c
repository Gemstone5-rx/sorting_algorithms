#include "sort.h"

/**
 * swap_down - compares the swapping of elements down
 * @arr_init: initializing an array
 * @arr: array
 * @size_init: initializing the size of array
 * @size: array's size
 * @flag: value used to indicate condition has been met
 * Return: void
 */

void swap_down(int *arr_init, int *arr, size_t size_init, size_t size, int *flag)
{
	int n;
	size_t i;
	(void)arr_init;

	if (flag[0] == 0)
	{
		for (i = 0; i < size / 2 ; i++)
		{
			if (arr[0] < arr[size - 1])
			{
				n = arr[0];
				arr[0] = arr[size - 1];
				arr[size - 1] = n;
				printf("Result [%lu/%lu] (DOWN):\n", size, size_init);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap_up - compares the swapping of elements upward
 * @arr_init: initializing an array
 * @arr: array
 * @size_init: initializing size of array
 * @size: array's size
 * @flag: value used to indicate condition has been met
 * Return: void
 */

void swap_up(int *arr_init, int *arr, size_t size_init, size_t size, int *flag)
{
	int n;
	size_t i;
	(void)arr_init;

	if (flag[0] == 0)
	{
		for (i = 0; i < size / 2 ; i++)
		{
		if (arr[0] > arr[size - 1])
		{
			n = arr[0];
			arr[0] = arr[size - 1];
			arr[size - 1] = n;
			printf("Result [%lu/%lu] (UP):\n", size, size_init);
			print_array(array, size);
		}
		}
	}
}

/**
 * deep_down - bitonic deep down
 * @arr_init: initializing an array
 * @arr: array
 * @size_init: initializing size of array
 * @size: array's size
 * @flag: value used to indicate condition has been met
 * Return: void
 */

void deep_down(int *arr_init, int *arr, size_t size_init, size_t size, int *flag)
{
	(void)arr;

	if (size < 2)
	{
		flag[0] = 0;
		return;
	}
	printf("Merging [%lu/%lu] (DOWN):\n", size, size_init);
	print_array(array, size);
	deep_up(arr_init, arr, size_init, size / 2, flag);
	swap_up(arr_init, arr, size_init, size, flag);
	deep_down(arr_init, arr + (size / 2), size_init, size / 2, flag);
	swap_down(arr_init, arr, size_init, size, flag);
}

/**
 * deep_up - bitonic deep up
 * @arr_init: initializing an array
 * @arr: array
 * @size_init: initializing size of array
 * @size: array's size
 * @flag: value used to indicate condition has been met
 * Return: void
 */

void deep_up(int *arr_init, int *arr, size_t size_init, size_t size, int *flag)
{
	(void)arr;

	if (size < 2)
	{
		flag[0] = 0;
		return;
	}

	printf("Merging [%lu/%lu] (UP):\n", size, size_init);
	print_array(array, size);
	deep_up(arr_init, arr, size_init, size / 2, flag);
	swap_up(arr_init, arr, size_init, size, flag);
	deep_down(arr_init, arr + (size / 2), size_init, size / 2, flag);
	swap_down(arr_init, arr, size_init, size, flag);
}

/**
 * bitonic_sort - function that sorts an array of integers in ascending order
 * using the Bitonic sort algorithm
 * @array: array
 * @size: array size
 * Return: void
 */

void bitonic_sort(int *array, size_t size)
{
	size_t size_init = size;
	int *array_init = array;
	int *flag;
	int aux = {0};

	flag = &aux;
	if (array)
	{
		deep_up(arr_init, arr, size_init, size, flag);
	}
}
