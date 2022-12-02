/* Write a C program to act as simple calculator, first it will ask the user to enter the
operation ID, depending on the operation, the program will ask the user either to
enter 1 operand or 2 operands and the program will execute the operation and print
the result. Each operation should be implemented in a stand a long function. */

#include<stdio.h>

void Add_nums();
void Sub_nums();
void Mul_nums();
void Div_nums();
void AND_nums();
void OR_nums();
void NOT_nums();
void XOR_nums();
void Rem_nums();
void INC_nums();
void DEC_nums();

int main()
{
	int num ;
	
	printf("Welcome To ITI Calculator \n\n");
	printf("1  To Add \n2  To Subtract \n3  To Multiplicate \n4  To Divide \n5  To AND \n6  To OR  \n7  To NOT  \n8  To XOR \n9  To Reminder \n10 To Increment \n11 To Decrement \n\nSelect ID no. : ");
	scanf("%d",&num);
	
	switch (num)
	{
		case 1:
			Add_nums();
			break;
		case 2:
			Sub_nums();
			break;  			
		case 3:
			Mul_nums();
			break;
		case 4:
			Div_nums();
			break;
		case 5:
			AND_nums();
			break;
		case 6:
			OR_nums();
			break;
		case 7:
			NOT_nums();
			break;
		case 8:
			XOR_nums();
			break;
		case 9:
			Rem_nums();
			break;
		case 10:
			INC_nums();
			break;
		case 11:
			DEC_nums();
			break;	
		default:
			printf("\nWrong choice ! \n");
	}
	return 0;
}

void Add_nums()
{
	float x, y;
	printf("plz enter first no. : ");
	scanf("%f",&x);

	printf("plz enter second no. : ");
	scanf("%f",&y);
	
	printf("Their Sum = %.2f", x+y);
}
void Sub_nums()
{
	float x, y;
	printf("plz enter first no. : ");
	scanf("%f",&x);

	printf("plz enter second no. : ");
	scanf("%f",&y);
	
	printf("Their Subtract = %.2f", x-y);
}
void Mul_nums()
{
	float x, y;
	printf("plz enter first no. : ");
	scanf("%f",&x);

	printf("plz enter second no. : ");
	scanf("%f",&y);
	
	printf("Their Product = %.2f", x*y);
}
void Div_nums()
{
	float x, y;
	printf("plz enter first no. : ");
	scanf("%f",&x);

	printf("plz enter second no. : ");
	scanf("%f",&y);
	
	printf("Their Division = %.2f", x/y);
}
void AND_nums()
{
	int x, y;
	printf("plz enter first no. : ");
	scanf("%d",&x);

	printf("plz enter second no. : ");
	scanf("%d",&y);
	
	printf("Their AND = %d", x&y);
}
void OR_nums()
{
	int x, y;
	printf("plz enter first no. : ");
	scanf("%d",&x);

	printf("plz enter second no. : ");
	scanf("%d",&y);
	
	printf("Their OR = %d", x|y);
}
void NOT_nums()
{
	int x;
	printf("Enter a Number : ");
	scanf("%d",&x);
	
	printf("Number NOT = %d", !x);
}
void XOR_nums()
{
	int x, y;
	printf("plz enter first no. : ");
	scanf("%d",&x);

	printf("plz enter second no. : ");
	scanf("%d",&y);
	
	printf("Their XOR = %d", x^y);
}
void Rem_nums()
{
	int x, y;
	printf("plz enter first no. : ");
	scanf("%d",&x);

	printf("plz enter second no. : ");
	scanf("%d",&y);
	
	printf("Their Remainder = %d", x%y);
}
void INC_nums()
{
	int x;
	printf("Enter a Number : ");
	scanf("%d",&x);
	
	printf("Number Increment = %d", ++x);
}
void DEC_nums()
{
	int x;
	printf("Enter a Number : ");
	scanf("%d",&x);
	
	printf("Number Decrement = %d", --x);
}