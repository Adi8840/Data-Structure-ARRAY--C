#include<stdio.h>
#include<conio.h>
void display(int arr[],int n);
void insertion_sort(int arr[],int n);
int main()
{
	int i,n,arr[100];
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enetr the elements of array\n");
	for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Array before sorting is\n");
    display(arr,n);
    insertion_sort(arr,n);
    printf("Array afer sorting is\n");
    display(arr,n);
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
/*
void insertion_sort(int arr[],int n)
{
    //Mera code;
	int i,j,temp,c=0;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0&&temp<arr[j];j--)
		{
			arr[j+1]=arr[j];
			c++;
		}
		arr[j+1]=temp;
	}
    printf("%d",c);
}
*/


void insertion_sort(int arr[],int n)
{
	//Sir ka code;
    int i,pos,temp,c=0;
    for(i=1;i<n;i++)
    {
    	//F=0;
    	temp=arr[i];
    	pos=i-1;
    	while(temp<arr[pos] && pos>=0)
    	{
    		arr[pos+1]=arr[pos];
    		pos--;
    		c++;
		}
		arr[pos+1]=temp;
		if(temp>=arr[pos])
		c++;
	}
	printf("Number of comparision is %d\n",c);	
}

