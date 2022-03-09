#include<stdio.h>
#include<conio.h>
int searchele(int arr[],int ele,int n);
int display(int arr[],int n);
int main()
{
	int arr[100];
	int n,i,ele;
	printf("Enter the size of array less then size 100\n");
	scanf("%d",&n);
	printf("Enter the elements af array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the element to search\n");
	scanf("%d",&ele);
	display(arr,n);
	searchele(arr,ele,n);	
}
int display(int arr[],int n)
{
	int i;
	printf("The entered array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 1;
}
int searchele(int arr[],int ele,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			printf("Element searched at index %d",i);
			break;
		}
	}
	if(arr[i]!=ele)
	{
		printf("Element not searched please try again later");
	}
	}