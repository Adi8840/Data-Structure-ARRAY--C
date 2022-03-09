#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
  int size;
  int f;
  int r;
  struct queue *arr;	
};
void createqueue(struct queue *q)
{
	q->r=-1;
	q->f=-1;
}
int queuefull(struct queue *q)
{
	if(q->r==size-1)
	return 1;
	return 0;
}
int queueempty(struct queue *q)
{
	if(q->f=-1 || q->r==-1)
	return 1;
	return 0;	
}
void queuepush(struct queue *q,int value)
{
  if(queuefull(struct queue *q))
  {
  	printf("Queue is full\n\n");
  }
  if(q->r==-1)
  {
  	q->f=0;
  	q->r=0;
  }	
  else
  {
  	q->r=q->r+1;
  }
  q->arr[q->r]=value;
}
int queuepop(struct queue *q)
{
	int n;
	if(queueempty(struct queue *q))
	{
	 printf("Queue is empty nothing to delete\n\n");
	}
	n=q->arr[q->f];
	if(q->f==q->r)
	{
	  q->f=-1;
	  q->r=-1;	
	}
	else
	{
	 q->f=q->f+1;	
	}
	printf("Popped element is %d ",n);
	return 1;	
}
int main()
{
	struct queue *q;
	int ele,ch,n;
	createqueue(struct queue *q);
	printf("Enter the size of queue\n");
	scanf("%d",&n);
	p->size=-1;
	p->arr=(int *)malloc(p->size*sizeof(int));
	whiel(1)
	{
	printf("Press 1 to insert element into queue\n");
	printf("Press 2 to delete element from queue\n");
	printf("Press 3 to display queue elements of queue\n");
	printf("Press 4 to quit from the program\n\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch);
	{
		case 1:
		{
		printf("Enter the element to insert\n");
		scanf("%d",&ele);
		queuepush(q,ele);		
		break;
		}
		case 2:
		{
		 queuepop(q);		
		break;
		}
			case 3:
		{
				
		break;
		}
			case 4:
		{
				
		break;
		}
			case :
		{
				
		break;
		}
	}
}