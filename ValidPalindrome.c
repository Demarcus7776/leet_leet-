#include <stdio.h>
#include <string.h>

void    rmv(char *s)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (s[i])
        {
                if (s[i] >= 'A' && s[i] <= 'Z')
                        s[i] += 32;
                i++;
        }
        i = 0;
        while(s[i])
        {
                if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
                {
                        s[j]= s[i];
                        j++;
                }
                i++;
        }
        s[j] = '\0';
}

int     validpro(char *s)
{
        int     i;
        int     l;
        int     f;

        rmv(s);
        l = strlen(s) - 1;
        i = 0;

        while(i < l)
        {
                if (s[i] != s[l])
                        return 0;
                l--;
                i++;
        }

        return 1;
}

int main (int ac, char **av)
{
        if (ac == 2)
                printf("%d", validpro(av[1]));
}
