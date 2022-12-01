/* Write a code that will ask the user to enter 3
numbers, the program will print the maximum
number of them. */

#include<stdio.h>

int main()
{
	int a[3],Max=0;

	for (int i=0 ; i<3; i++)
	{
		printf("enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for (int i=0 ; i<3; i++)
	{
		if(Max<a[i])
			Max=a[i];
	}
	printf("Maximum number is %d",Max);
	
	return 0 ;
}