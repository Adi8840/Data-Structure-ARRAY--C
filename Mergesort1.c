#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n);
void merge_sort(int arr[],int LB,int UB);
int merging_ele(int arr[],int LB,int mid,int UB);
int main()
{
	int n,i,*arr;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Your entered array is:");
	display(arr,n);
	merge_sort(arr,0,n-1);
	printf("Array after sorting is:");
	display(arr,n);
}
void merge_sort(int *arr,int LB,int UB)
{
	int mid;
	if(LB<UB)
	{
		mid=(LB+UB)/2;
		merge_sort(arr,LB,mid);
		merge_sort(arr,mid+1,UB);
		merging_ele(arr,LB,mid,UB);
	}
}
int merging_ele(int *arr,int LB,int mid,int UB)
{
	int i,j,k,arr1[100];
    i=LB;
    j=mid+1;
    k=LB;
    while(i<=mid && j<=UB)
    {
    	if(arr[i]<arr[j])
    	{
    	arr1[k]=arr[i];
		i++;
		k++;	
		}
		else
		{
			arr1[k]=arr[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		arr1[k]=arr[i];
		i++;
		k++;		
	}
	while(j<=UB)
	{
		arr1[k]=arr[j];
		j++;
		k++;
	}
	for(i=LB;i<=UB;i++)
	{
	arr[i]=arr1[i];  
    }
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