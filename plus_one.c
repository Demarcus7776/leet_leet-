#include<stdio.h>
#include<stdlib.h>

int	*plus(int *arr, int s, int *fullsize)
{
	int *a;
	int i = s - 1;

	while(i >= 0)
	{
		if(arr[i] < 9)
		{
			arr[i]++;
			*fullsize = s;
			return arr;
		}
		arr[i] = 0;
		i--;
	}

	a = malloc(sizeof(int) * (s + 1));

	if(!a)
	return NULL;
	a[0] = 1;

	i = 1;
	while(i <= s)
	{
		a[i] = 0;
		i++;
	}
	*fullsize = s + 1;
	return a;
}

/*int main ()
{
	int arr[] = {1,2,3,4};
	int j;
	int *a = plus(arr,4,&j);
	int i;

	i = 0;
	while(i < 4)
	{
		printf("%d", a[i]);
		i++;
	}

	free(a);
}
