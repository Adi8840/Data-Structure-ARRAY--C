#include<stdio.h>
#include<conio.h>
void display(int arr[],int n);
void eledelete(int arr[],int n,int ind);
int main()
{
	int arr[100];
	int i,ind,n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the index from which the element to delete\n");
	scanf("%d",&ind);
	printf("Array before deletion is\n");
	display(arr,n);
	eledelete(arr,n,ind);
	printf("Array after deletion\n");
	display(arr,n-1);
	
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void eledelete(int arr[],int n,int ind)
{
	int i;
	int pos=ind-1;
	if(ind>n)
	{
		printf("You have entered index greater the limit\n");
	}
	for(i=pos;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
}