#include<stdio.h>
#include<conio.h>
void display(int arr[],int n);
int search(int arr[],int n,int ele);
int main()
{
	int arr[100];
	int i,n,ele;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements of array in ascending order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&ele);
    display(arr,n);
    search(arr,n,ele);
}
void display(int arr[],int n)
{
	int i;
	printf("The array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int search(int arr[],int n,int ele)
{
	int min=0;
	int max=n-1;
	int mid;
	while(min<=max)
	{
	    mid=(min+max)/2;
		if(arr[mid]==ele)
		{
		printf("Element searched at index %d",mid);
		break;
		}
		if(ele<arr[mid])
		{
		max=mid-1;
	    }  
	    if(ele>arr[mid])
		{
		min=mid+1;
		}		
	}
	return -1;	
}