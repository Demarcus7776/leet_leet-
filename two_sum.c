#include<stdio.h>
#include<stdlib.h>

int *twosum(int *arr, int size, int target)
{
	int i;
	int j;
	int *r = malloc(sizeof(int)* 2);

	int i = 0;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if(arr[i] + arr[j] == target)
				{
					r = arr[i];
					r = arr[j];
				}
			j++;
		}
		i++;
	}

	return r;
}
