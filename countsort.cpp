#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int *arr,int n);
int maximum(int arr[],int n);
void countsort(int *arr,int n);
int main()
{
	int i,j;
	int arr[100];
	int n;
	printf("Enter the size of array less than size 100\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array before sorting\n");
	display(arr,n);
	countsort(arr,n);
	printf("Array after sorting\n");
	display(arr,n);	
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
int maximum(int arr[],int n)
{
	int m=arr[0];
	int i;
	for(i=1;i<=n;i++)
	{
		if(arr[i]>m)
		{
		  m=arr[i];	
		}
	}
	return m;
}
void countsort(int *arr,int n)
{
	int i,j;
	int max=maximum(arr,n);
	int* arr1=(int *)malloc((max+1)*sizeof(int));
	for(i=0;i<max+1;i++)
	{
		arr1[i]=0;
	}
	for(i=0;i<n;i++)
	{
		arr1[arr[i]]=arr1[arr[i]]+1;
	}
	i=0,j=0;
	while(i<=max)
	{
	  	if(arr1[i]>0)
	  	{
	  		arr[j]=i;
	  		arr1[i]=arr1[i]-1;
	  		j++;
		  }
		  else
		  {
		  	i++;
		  }
	}	
}
