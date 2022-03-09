#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int *arr,int n);
void quick_sort(int *arr,int LB,int UB);
int partition_index(int *arr,int LB,int UB);
int main()
{
	int n,i,LB,UB;
	int *arr;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	LB=0;
	UB=n-1;
	printf("Array before sorting is:");
	display(arr,n);
	quick_sort(arr,LB,UB);
	printf("Array before sorting is:");
	display(arr,n);	
}
void quick_sort(int *arr,int LB,int UB)
{
	int partition;
	if(LB<UB)
	{
		partition=partition_index(arr,LB,UB);
		quick_sort(arr,LB,partition-1);
		quick_sort(arr,partition+1,UB);
	}
}
int partition_index(int *arr,int LB,int UB)
{
	int pivot,low,high,temp;
	pivot=arr[LB];
	low=LB+1;
	high=UB;
	do
	{
		while(pivot>arr[low])
		low++;
		while(pivot<arr[high])
		high--;
		if(low<high)
		{
			temp=arr[low];
			arr[low]=arr[high];
			arr[high]=temp;
		}
	}while(low<high);
	temp=arr[LB];
	arr[LB]=arr[high];
	arr[high]=temp;	
	
	return high;
}
void display(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}