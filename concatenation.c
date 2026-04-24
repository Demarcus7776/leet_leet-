#include<stdio.h>
#include<stdlib.h>

int	*ocp(int *a, int s, int *returnsize)
{
	int maxsize = s * 2;
	int *arr = malloc(sizeof(int) * (s * 2));
	int i = 0;

	 while (i < s * 2)
    	{
        	arr[i] = a[i % s];
        	i++;
    	}

	*returnsize = s * 2;
	
	return arr;
}

/*int main()
{
	int arr[] = {1,1,2};
	int *a = ocp(arr,3);
	int i = 0;

	while(i < 3)
	{
		printf("%d", a[i]);
		i++;
	}
}
