#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int arr[],int n);
void heap_sort(int arr[],int n);
void adjust_ele(int arr[],int i,int n);
int main()
{
	int i,n,*arr;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("Enter the elements of array\n");
	for(i=1;i<=n;i++)
	scanf("%d",&arr[i]);
	printf("Array before sorting is:");
	display(arr,n);
	heap_sort(arr,n);
	printf("Array after sorting is:");
	display(arr,n);
}
void heap_sort(int arr[],int n)
{
	int i,temp; 
	for(i=(n/2);i>0;i--)
	adjust_ele(arr,i,n);
	
	for(i=n-1;i>=1;i--)
	{
		temp=arr[1];  
		arr[1]=arr[i+1];
		arr[i+1]=temp;
        adjust_ele(arr,1,i);
	}	
}

void adjust_ele(int arr[],int i,int n)
{
	int temp,j;
	temp=arr[i];
	j=2*i;
	while(j<=n)
	{
		if(arr[j]<arr[j+1] && j<n)
		j=j+1;
		
	    if(temp<arr[j])
	    arr[j/2]=arr[j];
	    else
	    break;
	    
	    j=j*2;	
	}
	arr[j/2]=temp;	
}

void display(int arr[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}