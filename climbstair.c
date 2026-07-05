#include<stdio.h>

int	clm(int n)
{
	if(n == 1)
	return 1;
	
	if(n == 2)
	return 2;

	return clm (n - 1) + clm (n - 2);
}

int main ()
{
	printf("%d", clm(3));
}
