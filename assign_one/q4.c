/* 4. Write a C program to read 20 whole numbers and sort then in ascending order and print the contents
of the array.  */

#include<stdio.h>

main()
{
	int a[20],count,i,j,temp;
	printf("Enter 15 numbers of your choice \n");
	
	for (i=0; i<=19; i++)
	{
	scanf("%d", &a[i]);
	
	}
	count=0;
	
	for (i = 0; i < 19; i++) {     
        for (j = i+1; j < 19; j++) {     
           if(a[i] > a[j]) {    
               temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;    
           }     
        }     
    }    

	printf("Elements of array sorted in ascending order is \n");    
    	for (i = 0; i < 19; i++) {     
        	printf("%d ", a[i]);    
   	 }   

}
