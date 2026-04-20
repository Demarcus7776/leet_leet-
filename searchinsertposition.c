#include<stdio.h>

int	search(int *arr,int size, int tar)
{
	int left = 0;
	int right = size - 1;
	int mid;

	// binary search 
	
	while(left <= right)
	{
		mid = left + (right - left) / 2;
		
		if(arr[mid] == tar)
			return mid;

		else if(arr[mid] > tar)
			right = mid - 1;

		else
			left = mid + 1;
	}

	return left;
}

int main ()
{
	int arr[] = {1,2,4,5};
	
	printf("%d", search(arr,4,6));
}
