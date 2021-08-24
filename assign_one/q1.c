/* 1. Write a C program to read three Whole numbers (what we call as integers in programming language) and
implement the algorithm, to find the largest of these three  */


#include<stdio.h>

main()
{
	int a,b,c,max;
	printf("Enter 3 numbers of your choice \n");
	scanf("%d  %d  %d" , &a,&b,&c);
	
	if (a>b && a>c)
		 max=a; 
	else if  (b>c)
		 max=b;  
	else 
		 max=c;  
		 
	printf("Max number is = %d \n", max);

}
