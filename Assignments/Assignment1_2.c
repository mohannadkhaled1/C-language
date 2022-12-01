/* Write a code that scan 3 numbers from the user
and print them in reversed order */

#include<stdio.h>

int main()
{

/* First Method */

	int x,y,z;

	printf("please enter number 1 : ");
	scanf("%d",&x);
	printf("please enter number 2 : ");
	scanf("%d",&y);
	printf("please enter number 3 : ");
	scanf("%d",&z);

	printf("number 3: %d\nnumber 2: %d\nnumber 1: %d\n",z,y,x);

	/* Second Method */

	int a[3];
	for (int i=0 ; i<3; i++)
	{
		printf("please enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}

	for (int i=2 ; i>=0; i--)
	{
		printf("number %d: %d\n",i+1,a[i]);
	}

	return 0 ;
}