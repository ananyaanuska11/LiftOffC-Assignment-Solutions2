//QUESTION 1

#include <stdio.h>
int main ( )
{
	int a, s;
	printf("\n Enter a number :");
	scanf("%d", &a);
	s=0;
	while (a>0)
	{
		s=s+a%10;
		a=a/10;
	}
	printf("\n The sum of digits of the number = %d",s);
	return 0;
}
