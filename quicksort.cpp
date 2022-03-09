#include<stdio.h>
#include<conio.h>
void display(int *arr,int n);
int quicksort(int arr[],int low ,int high);
int partitionindex(int arr[],int low,int high);
int i,j;
int main()
{
	int n;
	int arr[100];
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements to sort\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int low=0;
	int high=n-1;
	printf("Array before sorting\n");
	display(arr,n);
    quicksort(arr,low,high);
    printf("Array after sorting\n");
    display(arr,n);	
    return 0;
}
int quicksort(int arr[],int low ,int high)
{
	int partition;
	if(low<high)
	{
		partition=partitionindex(arr,low,high);
		quicksort(arr,low,partition-1);
		quicksort(arr,partition+1,high);
	}
}
int partitionindex(int arr[],int low,int high)
{
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	int temp;
	do
	{
	while(arr[i]<=pivot)
	{
		i++;
	}
	while(arr[j]>pivot)
	{
		j--;
	}
	if(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
while(i<j);
	temp=arr[low];
	arr[low]=arr[j];
	arr[j]=temp;
	return j;
}
void display(int *arr,int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
