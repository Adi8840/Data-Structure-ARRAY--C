#include<stdio.h>
#include<conio.h>
void display(int arr[],int n);
void selectionsort(int arr[],int n);
int main()
{
	int i,n;
	int arr[100];
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Array before sorting is \n");
	display(arr,n);
	selectionsort(arr,n);
	printf("Array after sorting is \n");
	display(arr,n);
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
void selectionsort(int arr[],int n)
{
	int i,j;
	int min,pos,temp;
	for(i=0;i<n;i++)
	{
		min=arr[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
	     if(min>arr[j])
	     {
	     	pos=j;
		 }
		 temp=arr[i];
		 arr[i]=arr[pos];
		 arr[pos]=temp;
		}
	}

}