#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int arr[]);
int insertelement(int arr[],int ele,int ind,int cap);
int deletee(int arr[],int ind,int cap);
void sortelement(int arr[]);
void searchelement(int arr[]);
int n;
int main()
{
    int i,choice,arr[100];	
   
	while(1)
	{
		printf("Press 1 to create array\n");
		printf("Press 2 to insert the element into array\n");
		printf("Press 3 to delete the element from array\n");
		printf("Press 4 to sort the elements of array\n");
	    printf("Press 5 to search the element from array\n");
	    printf("Press 6 to display array elements\n");
	    printf("Enter 7 to quit the program\n");
	    printf("Enter your choice\n\n");
		scanf("%d",&choice);
		
        
        switch(choice)
        {
    	case 1:
   	    {
    	printf("Enter the size of array\n");
	    scanf("%d",&n);
    	printf("Enter the elements of array\n");
    	for(i=0;i<n;i++)
      	{
		scanf("%d",&arr[i]);
	    }
		break;	
    	}
	    case 2:
		{
     	int ele,ind;
	    printf("Enter the element to insert\n");
     	scanf("%d",&ele);
    	printf("Enter the index on which element to insert\n");
    	scanf("%d",&ind);
		n=insertelement(arr,ele,ind,100);	
		break;
     	}
		case 3:
		{
		int ind;
		printf("Enter the index from which the element to delete\n");
        scanf("%d",&ind);
        n=deletee(arr,ind,100);
		break;
		}
		case 4:
		{
		sortelement(arr);
		break;
		}
		case 5:
		{
		searchelement(arr);
		break;
		}
		case 6:
		{
		display(arr);
		break;
		}
        case 7:
		{
		exit(0);
		}
		default:
		{
		printf("You have entered invalid input press any other key\n\n");
		}		
		}
}

	
}
void display(int arr[])
{
	int i;
	printf("The array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int insertelement(int arr[],int ele,int ind,int cap)
{
	int i;
	if(ind>=cap)
	{
		printf("You have entered index greater the size please enter any other key\n");
	}
	for(i=n;i>ind;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[ind]=ele;
	return n+1;
	}
int deletee(int arr[],int ind,int cap)
{
	int i;

    if(ind>=cap)
	{
		printf("You have enteted index greater the capacity of array which doesnot contain any element\n");
	}
	for(i=ind;i<n;i++)
	{
		arr[i]=arr[i+1];
    }
	return n-1;	 
 } 
 void sortelement(int arr[])
 {
 	int i,j,temp,op;
 	for(i=1;i<n;i++)
 	{
 	for(j=0;j<n-i;j++)
 	{
 	if(arr[j]>arr[j+1])
 	{
 	temp=arr[j];
 	arr[j]=arr[j+1];
 	arr[j+1]=temp;
    }
    }
	}
	
 }
 void searchelement(int arr[])
 {
 	int i,j,ele;
 	printf("Enter the element to search\n\n");
 	scanf("%d",&ele);
 	for(i=0;i<n;i++)
 	{
 		if(arr[i]==ele)
 		{
 			printf("Element searched at index %d\n\n",i);
 			break;
		 }
	 }
	if(arr[i]!=ele)
	{
		printf("Element not searched\n");
	}
 }