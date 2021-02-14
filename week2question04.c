// QUESTION 04

#include<stdio.h>
int main ( )
{
	int arr[20],largest,smallest,n,i;
	printf("\n Enter the number of elements in array: ");
	scanf("%d",&n);
	printf("\n Enter elements of array: \n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\n Elements of array : ");
	for(i=0;i<n;i++)
	printf("%d \t",arr[i]);
	smallest=largest=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>largest)
		largest=arr[i];
		if(arr[i]<smallest)
		smallest=arr[i];
	}
	printf("\n Smallest element of array: %d", smallest);
	printf("\n largest element of array: %d", largest);
	return 0;
}
