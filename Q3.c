#include<stdio.h>

int	binarycount(int *a, int s)
{
	int i;
	int c;
	int max;

	i = 0;
	max = 0;
	c = 0;
	while(i < s)
	{
		if(a[i] == 1)
			c++;

		if(c > max)
			max = c;
	
		if(a[i] == 0)
			c = 0;
	i++;
	}

	return max;
}

int main()
{
	int arr[] = {1,0,1,1,0,1,};
	printf("%d" ,binarycount(arr,6));
}
