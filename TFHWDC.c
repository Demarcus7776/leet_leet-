#include<stdio.h>

int	maxdi(int *arr , int size)
{
	int i;
	int j;
	int d;

	i = 0;
	while(i < size)
	{
		j = j + 1;
		while(j < size)
		{
			if(arr[i] != arr[j])
				d = j - i;
			j++;
		}
		i++;
	}

	return d;
}

int main ()
{
	int arr[] = {1,8,3,8,3};

	printf("%d", maxdi(arr,5));
}
