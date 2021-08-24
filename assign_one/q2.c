/* 2. Write a C Program to read the 15 whole numbers into an array implement the algo to find the largest
in the array */

#include<stdio.h>

main()
{
	int a[15],max,i;
	printf("Enter 15 numbers of your choice \n");
	
	for (i=0; i<=14; i++)
	{
	scanf("%d", &a[i]);
	
	}
	
	max =a[0];
	
	for (i=0; i<=14; i++)
	{
		if (a[i] > max)
			max=a[i];
		
	}

	printf("Max number is = %d \n", max);

}
