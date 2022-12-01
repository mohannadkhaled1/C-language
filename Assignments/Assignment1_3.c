/* Write a code that takes 2 numbers and print their
summation, subtraction, anding, oring, and Xoring */

#include<stdio.h>

int main()
{
	int x,y ;

		printf("plz enter first no. : ");
		scanf("%d",&x);

		printf("plz enter second no. : ");
		scanf("%d",&y);

		printf("their sum = %d\n", x+y);

		printf("their subtract = %d\n", x-y);

		printf("their AND = %d\n", x&y);

		printf("their OR = %d\n", x|y);

		printf("their XOR = %d\n", x^y);
		
		return 0 ;
}