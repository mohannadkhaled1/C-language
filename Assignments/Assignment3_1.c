/* Write a C program that ask the user to
enter two numbers and print their
summation, this program should never
ends until the user close the window */

#include<stdio.h>

int main() 
{
	int x ,y ,z;
	do
	{
		z=1;
		printf("Please enter first number ");
		scanf("%d",&x);
		
		printf("Please enter second number ");
		scanf("%d",&y);
		
		printf("The result is %d",x+y);
		printf("\n\n");
	}
	while(z==1);

    return 0;
}