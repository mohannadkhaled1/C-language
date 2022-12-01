/* Write a code that can draw this pyramid */

#include<stdio.h>

int main()
{

	int i,j,x;

	for(i=1; i<=6; i++)
	{
		for(x=1; x<=6-i; x++)
			printf(" ");
		
		for(j=1; j<=(2*i)-1; j++)
			printf("*");
		
		printf("\n");	
	}
		
	return 0 ;
}