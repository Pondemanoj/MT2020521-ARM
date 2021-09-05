/* Implement a Simple Queue  */

#include<stdio.h>
#include<stdlib.h>

#define MAX 6

int q[MAX], rear=-1,front=-1, i, temp, ch;

void add_to_queue()
{
	rear++;
	if(rear==0)
		front=0;
	
	if(rear>MAX-1)
		printf("Queue is Overflow \n");
		
	else
	{
		printf("Enter an element \n");
		scanf("%d",&q[rear]);
	}

}

void remove_from_Queue()
{	
	
	if(rear<0)
		printf("Queue is Underflow \n");
		
	else if(rear==front)
	{
		temp=q[front];
		printf("Deleted item is %d \n", temp);
		q[front]=NULL;
		front=-1;
		rear=-1;
		
	}
		
	else
	{
		temp=q[front];
		printf("Deleted item is %d \n", temp);
		q[front]=NULL;
		front++;
		
	}


}

void Print()
{
	printf("Elements in the stack \n");
	for(i=0;i<=MAX;i++)
	{
		//sleep(1);
		printf("\n %d", q[i]);
	}
}

int main()
{
	for(i=0;i<=MAX;i++)
	{
		//sleep(1);
		printf("\n %d", q[i]);
	}
	
	do
	{
		printf("\n ---- Operations on Stack ----- \n");
		printf("\n 1.Push \n 2.Pop \n 3.list \n 4.exit \n");
		printf("Enter your choice \n");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				add_to_queue();
				break;
			
			case 2:
				remove_from_Queue();
				break;
				
			case 3:
				Print();
				break;
				
			case 4:
				exit(0);
			
				
			default: printf("Invalid operations \n ");
			
		
		}
		
	}while(1);
	
}

