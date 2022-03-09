#include<stdio.h>
#include<conio.h>
void display(int arr[],int n);
void insert(int arr[],int m,int ele,int ind,int cap);
int main()
{
	int arr[100];
	int i,n,ele,ind;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to insert in array\n");
	scanf("%d",&ele);
	printf("Enter the index on which the element want to enter\n");
	scanf("%d",&ind);
 	printf("Array before insertion is\n");
   display(arr,n);
   insert(arr,n+1,ele,ind,100);
   printf("Array after insertion is\n");
   display( arr, n+1);  
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
void insert(int arr[],int m,int ele,int ind,int cap)
{
	int i;
	if(ind>=cap)
	{
		printf("You have entered index greater than the capacity of array\n");
	}
	for(i=m;i>=ind;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[ind]=ele;	
}