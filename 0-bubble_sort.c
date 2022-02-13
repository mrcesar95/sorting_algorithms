#include "sort.h"
/**
*bubble_sort - Ordena una matriz en orden ascendente
*@array: La matriz que debemos ordenar
*@size: El tamaño de la matrix
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	size_t size2 = size, new;

	for (i = 0; i < size2; i++)
	{
		for (j = 0; j < size2 - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				new = array[j];
				array[j] = array[j + 1];
				array[j + 1] = new;
				print_array(array, size2);
			}
		}
	}
}