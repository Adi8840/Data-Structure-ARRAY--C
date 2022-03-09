#include<stdio.h>
#include<conio.h>
void display(int* arr,int n);
void mergesort(int arr[],int low,int high);
void merging(int arr[],int low,int mid,int high);
int i,j;
int main()
{
	int n,arr[100];
	int low,high;
	printf("Emter the size of array less tham 100\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	low=0;
	high=n-1;
	printf("Array before sorting is\n");
	display(arr,n);
	mergesort(arr,low,high);
	printf("Array after sorting is\n");
	display(arr,n);	
	return 1;
}
void display(int* arr,int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void merging(int arr[],int low,int mid,int high)
{
  int i,j,k,arr1[100];
  i=low;
  j=mid+1;
  k=low;
  while(i<=mid && j<=high)
  {
  	if(arr[i]<arr[j])
	{
  	arr1[k]=arr[i];
  	k++;
  	i++;
  }
  else
  {
  	arr1[k]=arr[j];
  	k++;
  	j++;
}
}
while(i<=mid)
{
	arr1[k]=arr[i];
	i++;
	k++;
}
while(j<=high)
{
	arr1[k]=arr[j];
	k++;
	j++;
}
for(i=low;i<=high;i++)
{
	arr[i]=arr1[i];
}  	
}
void mergesort(int arr[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merging(arr,low,mid,high);
	}	
}

