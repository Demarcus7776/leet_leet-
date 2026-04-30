#include<stdio.h>

int	*shuffel(int *arr, int size, int n , int *returnsize)
{
	int *a = malloc(sizeof(int) * size);

	int i = 0;
	int j = n;
	int k = 0;

	*returnsize = size;

	while(i < n)
	{
		a[k] = arr[i];
		k++;
		a[k] = arr[j];
		k++;

		j++;
		i++;
	}

	return a;
}
