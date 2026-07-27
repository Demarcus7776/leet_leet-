#include <stdio.h>

int	ft_strlen(int *s)
{
	int i;
	
	while (s[i])
		i++;
	
	return i;
}

int	anagram(char *s, char *d)
{
	int	i = 0;
	int	j;
	int	ls = ft_strlen(s);
	int	ld = ft_strlen(d);

	if()
	while(s[i])
	{
		j = 0;
		while (d[j])
		{
			if(s[i] == d[j])
				break;
			if (d[j] != s[i] && d[j + 1] == '\0')
				return 0;
		j++;
		}
		i++;
	}
	return 1;
}

int main()
{
	char s[] = "a";
	char d[] = "ab";

	printf("%d", anagram(s,d));
}
