#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Printing Algorithms */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting Algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int partition(int *array, int beg, int end, int size);
void quickSort(int *array, int beg, int end, int size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge(size_t lo, size_t mi, size_t hi, int *dest, int *src);
void merge_partition(size_t lo, size_t hi, int *array, int *base);
void heap_sort(int *array, size_t size);
void swap_root(int *array, size_t root, size_t hi, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
