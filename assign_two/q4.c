/* Empty Ascending Stack */

#include<stdio.h>
#include<stdlib.h>

#define MAX 6

int s[MAX], sp=0, i, temp, ch;

void Push()
{
	if(sp>MAX)
		printf("Stack is Overflow \n");
	else
	{
		printf("Enter an element \n");
		scanf("%d",&s[sp]);
	}
	sp++;
	

}

void Pop()
{	
	
	if(sp<0)
		printf("Stack is Underflow \n");
		
	else
	{
		sp--;
		temp=s[sp];
		printf("Deleted item is %d \n", temp);
		s[sp]=0;
		
	}


}

void Print()
{
	printf("Elements in the stack \n");
	for(i=0;i<=MAX;i++)
	{
		//sleep(1);
		printf("\n %d", s[i]);
	}
}

int main()
{
	for(i=0;i<=MAX;i++)
	{
		//sleep(1);
		printf("\n %d", s[i]);
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
				Push();
				break;
			
			case 2:
				Pop();
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

