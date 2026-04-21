#include<stdio.h>

int ft_len(char *s)
{
	int i = 0;

	while(s[i])
	{
		i++;
	}
	
	return i;
}

int	here(char *s)
{
	int len = ft_len(s) - 1;
	int i = 0;
	
	while(len >= 0 && s[len] == ' ')
		len--;

	while(len >= 0 && s[len] != ' ')
	{
		len--;
		i++;
	}
	return i;
}

int main ()
{
	char s[] = "hello wod";
	
	printf("%d", here(s));
}
