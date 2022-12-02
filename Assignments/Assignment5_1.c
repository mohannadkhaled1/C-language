/* Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then print the minimum and the maximum of the values. */

#include<stdio.h>

int main()
{
	int num[10];

	for (int i=0 ; i<10; i++)
	{
		printf("Enter number %d : ",i+1);
		scanf("%d",&num[i]);
	}
	int max=num[0], min=num[0];
	for (int i=0 ; i<10; i++)
	{
		if(max<num[i])
			max=num[i];
		if(min>num[i])
			min=num[i];
	}
	printf("\nMaximum number is %d",max);
	printf("\nMinimum number is %d",min);

	return 0;
}
