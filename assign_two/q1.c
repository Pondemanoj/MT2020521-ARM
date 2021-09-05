/* Full Descending Stack */

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int s[MAX], sp=6, i, temp, ch;

void push()
{
	sp--;
	if(sp<0)
		printf("Stack is Overflow \n");
	else
	{
		printf("Enter an element \n");
		scanf("%d", &s[sp]);
	}

}

void pop()
{	
	
	if(sp>MAX)
		printf("Stack is Underflow \n");
	
	else if (sp==-1)
	{
		sp++;
		temp=s[sp];
		printf("Deleted item is %d \n", temp);
		s[sp]=NULL;
		
	}	
	else
	{
		sp++;
		temp=s[sp];
		printf("Deleted item is %d \n", temp);
		s[sp]=NULL;
	
	}


}

void list()
{
	printf("Elements in the stack \n");
	for(i=MAX;i>=0;i--)
	{
		//sleep(1);
		printf("\n %d", s[i]);
	}
}

void main()
{
	do
	{
		printf("\n ---- Operations on Stack ----- \n");
		printf("\n 1.Push \n 2.Pop \n 3.list \n 4.exit \n");
		printf("Enter your choice \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				push();
				break;
			
			case 2:
				pop();
				break;
				
			case 3:
				list();
				break;
				
			case 4:
				exit(1);
			
			default: printf("Invalid operations \n ");
			
		
		}
		
	}while(1);
	

}
