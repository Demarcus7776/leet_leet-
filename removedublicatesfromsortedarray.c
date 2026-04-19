#include<stdio.h>
#include<stdlib.h>

int rmv_arr(int *arr , int size)
{
	int i = 0;
	int c = 0;

	while(i < size)
	{
		if( i == 0 || arr[i] != arr[i - 1])
			{
				arr[c] = arr[i];
				c++;
			}
		i++;
	}

	return c;
}

int main ()
{
	int arr[] = {1,1,2};
	int ns = rmv_arr(arr,3);
	int i;

	i = 0;
	while (i < ns)
	{
		printf("%d", arr[i]);
		i++;
	}
}	
