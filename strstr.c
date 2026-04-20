#include<stdio.h>

int	ft_strstr(char *s, char *find)
{
	int i;
	int j;

	i = 0;

	if (find[0] == '\0')
		return 0;
	
	while(s[i])
	{
		j = 0;
		while(find[j] == s[i + j])
		{
			j++;
		}

		if (find[j] == '\0')
			return i;
		i++;
	}

	return (-1);
}

int main ()
{
	char s[] = "leetcode";
	char f[] = "leeto";


	printf("%d",  ft_strstr(s,f));
}
