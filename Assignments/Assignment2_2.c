/* Write a C code that ask the user to enter his ID, if the ID is valid it will
ask the user to enter his password, if the password is correct the
program will print the user name, if the password is incorrect the
program will print Incorrect Password.
In case of not existing ID, the program will print Incorrect ID */

#include<stdio.h>

int main() {
	
	int Pass,ID, x=1;	

	while (x!=0)
	{
	printf("Enter your ID: ");
	scanf("%d",&ID);	

		if (ID==201810712)
		{
			while (x!=0)
			{	
				printf("\nEnter the password: ");	
				scanf("%d",&Pass);
				if(Pass==1234)
				{
				printf("\nUser name : Mohannad Khalid Mohamed");
				x=0;
				}
				else
				{
				   printf("Incorrect password\n");       
				}
			}
		}	
		else
		{
		   printf("Incorrect ID \n");       
		}

	}

	return 0;
} 