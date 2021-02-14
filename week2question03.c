// QUESTION 03

#include <stdio.h>
int main ( )
{
	char str[1000];
	int i=0, c=0;
	printf ("\n Enter the string : ");
	gets(str);
	while (str[i]!= '\0')
	{
		if (str[i]==' ' && str [i+1]!=' ')
		c++;
		i++;
	}
	printf("\n Total count of words is :%d", c+1);
	return 0;
}
