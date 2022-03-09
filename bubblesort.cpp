#include<stdio.h>
#include<conio.h>
int display(int arr[],int n);
int arrsort(int arr[],int n);
int main()
{
	int i,n;
	int arr[100];
	printf("Enter the size of array less than 100\n");
	scanf("%d",&n);
	printf("Enetr the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Array before sorting is \n");
display(arr,n);
arrsort(arr,n);
printf("Array after sorting is\n");
display(arr,n);
}
int display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 1;
}
int arrsort(int arr[],int n)
{
	int i,j;
	int temp,F=1,c=0;
	for(i=1;i<n&&F;i++)
	{
		F=0;
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
            temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			F=1;
			c++;	
		}
		}
		if(temp==0)
		{
			printf("Your array is already sorted\n");
			break;
		}		
	}
	printf("The number of comparision is %d\n",c);
	return 1;
	
}