#include<stdio.h>

int rmv_elm(int *arr, int size, int val)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(i < size)
	{
		if(arr[i] != val)
		{
			arr[j] = arr[i];
			j++;
		}
		i++;
	}

	return j;
}

int main()
{
	int arr[] = {0,1,2,2,3,0,4,2};
	int ns = rmv_elm(arr,8,2);
	int i = 0;

	while (i < ns)
	{
		printf("%d", arr[i]);
		i++;
	}
}
