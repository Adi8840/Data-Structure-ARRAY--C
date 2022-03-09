#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	int arr[100];
	printf("Enter the size of array less than 100\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The entered array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}