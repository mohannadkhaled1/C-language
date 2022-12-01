/* Write a login program in C that ask the
user to enter his ID and his password, if
the ID is correct the system will ask the
user to enter his password up to 3 times,
if he enters the password right the
systems welcomes him, if the three times
are incorrect, the system print No more
tries. If the user ID is incorrect the
system print You are not registered */

#include<stdio.h>

int main() {
	
	int Pass,ID, x=1, n=0;	

	while (x!=0)
	{
		if(n==3)
		{
			printf("\n No More tries \n");
			break;
		}
	printf("Enter your ID: ");
	scanf("%d",&ID);	

		if (ID==201810712)
		{
			while (n!=3)
			{	
				printf("\n Enter the password: ");	
				scanf("%d",&Pass);
				if(Pass==1234)
				{
				printf("\n Welcome Dear .. !");
				break;
				}
				else  
				{
					n++;
				   printf("\n Incorrect password\n");       
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