#include<stdio.h>

int	root(int nb)
{
	int i;

	if (nb == 0)
		return 0;

	i = 1;
	while(i <= nb / i)
		i++;

	return (i - 1);
}

int main ()
{
	printf("%d", root(67));
}
