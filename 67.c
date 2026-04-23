#include<stdio.h>
#include<stdlib.h>

int	len(char *s)
{
	int i = 0;
	
	while(s[i])
		i++;
	return i;
}

char	*binarysum(char *a , char *b)
{
	int len_a  = len(a);
	int len_b = len(b);
	int carry = 0;
	int max;
	int i = len_a - 1;
	int j = len_b - 1;
	int sum;

  //here we chosse the longtest lenght and restor it on a variable

	if (len_a > len_b)
		max = len_a;
	else
		max = len_b;

  //allocate the res;
	char *res = malloc(sizeof(char) * (max + 2));
	int k = max;

	if(!res)
	return NULL;

	res[max+1] = '\0';

  //here we calculate the binary;

	while(k >= 0)
	{
		sum = carry;

		if(i >= 0)
		sum += a[i--] - '0';
		if(j >= 0)
		sum += b[j--] - '0';
		
		res[k--] = (sum % 2) + '0';
		carry = sum / 2;	
	}

	if (res[0] == '0')
		return (res + 1);

	return res;
	
}

int main ()
{
	char s[] = "0";
	char r[] = "0";
	char *h = binarysum(s,r);

	printf("%s", h);
}
