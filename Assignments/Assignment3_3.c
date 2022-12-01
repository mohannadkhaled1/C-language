/* Write a c program that draw a pyramid of
stars with height entered by the user */

#include<stdio.h>


int main()
{
	int i,j,x,y;
	printf("Please Enter the height of the pyramid: ");
	scanf("%d",&y);

	for(i=1; i<=y; i++)
	{
		for(x=1; x<=y-i; x++)
			printf(" ");
		
		for(j=1; j<=(2*i)-1; j++)
			printf("*");
		
		printf("\n");	
	}
		
	return 0 ;
}
