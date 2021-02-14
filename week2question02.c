// QUESTION 02

#include <stdio.h>
int main ( )
{
	int  i, s1,s2,k=5;
	s1=0;
	s2=0;
	printf ("\n Enter the size of an array : ");
	scanf ("%d" ,&k);
	int a[k];
	printf ("\n Enter the elements of the array : ");
	for (i=0; i<k; i++)
			scanf("%d", &a[i]);
	
	for (i=0;i<k;i++)
	{
		if(a[i]%2==0)
		   s1=s1+a[i];
		if(i%2==0)
		   s2=s2+a[i];
	}
	printf("\n The sum of even elements of the array is = %d", s1);
	printf("\n The sum of even position elements of the array is = %d", s2);
	return 0;
}
