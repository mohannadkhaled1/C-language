/* Write a C program the implement 2 function:

1- Function to get the maximum of 4 values
2- Function to get the minimum of 4 values

The program will ask the user first to enter the 4 values, then print the maximum
number and minimum number of them. */

#include<stdio.h>

void Max(int *num);
void Min(int *num);

int main()
{
	int a[4];

	for (int i=0 ; i<4; i++)
	{
		printf("enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	Max(a);
	Min(a);
	
	return 0;
}

void Max(int *num)
{
	int max=num[0];
	for (int i=0 ; i<4; i++)
	{
		if(max<num[i])
			max=num[i];
	}
	printf("Maximum number is %d",max);
}

void Min(int *num)
{
	int min=num[0];
	for (int i=0 ; i<4; i++)
	{
		if(min>num[i])
			min=num[i];
	}
	printf("\nMinimum number is %d",min);
}