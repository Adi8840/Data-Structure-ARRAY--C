#include<stdio.h>
#include<conio.h>
void display(int arr[],int n);
int sorting(int arr[],int n);
int removedublicate(int arr[],int n);
void eleunion(int arr1[],int arr2[],int n1,int n2);
int main()
{
	int arr1[50];
	int arr2[50];
	int i,n1,n2;
	printf("Enter the size of firt set\n");
	scanf("%d",&n1);
	printf("Enter the elements of first set\n");
	for(i=0;i<n1;i++)
	scanf("%d",&arr1[i]);
	printf("Enter the size of second set\n");
	scanf("%d",&n2);
	printf("Enter the elements of second set\n");
	for(i=0;i<n2;i++)
	scanf("%d",&arr2[i]);
	printf("Your first set is\n");
	display(arr1,n1);
	printf("Your second set is\n");
    display(arr2,n2);
    eleunion(arr1,arr2,n1,n2); 
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
void eleunion(int arr1[],int arr2[],int n1,int n2)
{
	int i,j;
	int k=0;
	int arr[n1+n2];
	for(i=0;i<n1;i++)
	{
	arr[k]=arr1[i];
	k++;
    }
    for(i=0;i<n2;i++)
    {
    arr[k]=arr2[i];
    k++;
	}
	sorting(arr,k);	
}
//It is done to remove dublicate elements;
int sorting(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-1;j++)
	{
	if(arr[j]>arr[j+1])
	{
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
	}
	}
	removedublicate(arr,n);
	return 1;
}

int removedublicate(int arr[],int n)
{
	int i,k=0;
	int arr1[n];
	for(i=0;i<n;i++)
	{
	if(arr[i]!=arr[i+1])
	{
	arr1[k]=arr[i];
	k++;
	}
	}
	printf("Union of sets is\n");
	display(arr1,k);
	return 1;
	
}
