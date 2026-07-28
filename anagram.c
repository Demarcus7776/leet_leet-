#include <stdio.h>

int	anagram(char *s, char *d)
{
	int i;
	int arr[26];

	i = 0;
	while(i < 26)
	{
		arr[i] = 0;
	i++;
	}

	i = 0;
	while(s[i] && d[i])
	{
		arr[s[i] - 'a']++;
		arr[d[i] - 'a']--;
	i++;
	}
	if(s[i] || d[i])
		return 0;
	i = 0;
	while(i < 26)
	{
		if(arr[i] != 0)
			return 0;
	i++;
	}
	return 1;
}
int main(int ac, char **av)
{
	if(ac == 3)
	{
		printf("%d", anagram(av[1],av[2]));
	}
}
