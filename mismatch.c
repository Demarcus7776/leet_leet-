#include <stdlib.h>

int	*findErrorNums(int *nums, int numsSize, int *returnSize)
{
	int	*count;
	int	*arr;
	int	i;

	count = malloc(sizeof(int) * numsSize);
	arr = malloc(sizeof(int) * 2);
	if (!count || !arr)
		return (0);

	i = 0;
	while (i < numsSize)
	{
		count[i] = 0;
		i++;
	}

	i = 0;
	while (i < numsSize)
	{
		count[nums[i] - 1]++;
		i++;
	}

	i = 0;
	while (i < numsSize)
	{
		if (count[i] == 2)
			arr[0] = i + 1;
		if (count[i] == 0)
			arr[1] = i + 1;
		i++;
	}

	*returnSize = 2;
	free(count);
	return (arr);
}
