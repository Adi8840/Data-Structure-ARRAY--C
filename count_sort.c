#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*arr;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Your array before sorting is\n");
	display(arr,n);
	count_sort(arr,n);
	printf("Array after sorting is\n");
	display(arr,n);
	
}
int count_sort(int *arr,int n)
{
	int i,j,max,*arr1;
	max=max_ele(arr,n);
	arr1=(int *)malloc((max+1)*sizeof(int));
	
	for(i=0;i<max+1;i++)
	arr1[i]=0;
	
	for(i=0;i<n;i++)
	arr1[arr[i]]=arr1[arr[i]]+1;
	
	i=0,j=0;
	while(i<=max)
	{
		if(arr1[i]>0)
		{
			arr[j]=i;
			arr1[i]--;
			j++;
		}
		else
		{
		 i++;	
		}
	}	
}
int max_ele(int *arr,int n)
{
	int i,ele=0;
	for(i=0;i<n;i++)
	{
		if(ele<arr[i])
		ele=arr[i];
	}
	return ele;
}
void display(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
