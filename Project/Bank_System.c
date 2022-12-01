#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

typedef struct account
{
    char Full_name;
	int Bank_ID;
	int Age;
    char Full_address[60];
    int National_ID;
	float Balance;
    char Account_status[10];
	char Password[10];
	
}client;

void createAccount(client *num);
void DisplayAccount(client *num);
void password(char *pass);
void login();

int main() 
{
	client *acc[100];
	int user, ad, cl, id, accId;
	
	printf("\n ********** Welcome to ITI Bank ********** \n");
	
	while (1) 
	{		
	printf("\n- choose user option \n\n 1- Admin Window \n 2- Client Window \n 3- Exit System \n\n your choose : ");
	scanf("%d",&user);
	
		if (user>3 || user<1)
		{
			printf("\nWrong choice ! \n");
		}
		else if(user == 1) 
		{
			while(1)
			{
				printf("\n\n- choose option \n\n 1- Create New Account \n 2- Open Existing Account \n 3- Return To Main Menu \n your choose :");
				scanf("%d",&ad);

				if (ad == 1)
				{
					for(int i=0; i<100; i++)
					{
						if (acc[i]==NULL)
						{
							createAccount(acc[i]);
							printf("\n");
							DisplayAccount(acc[i]);
							break ;
						}
					}	
				}
						
				else if (ad == 2)
				{
					// printf("Enter Account ID : ");
					// scanf("%d",&accId);
					// for(int i=0; i<100; i++)
					// {
						// if (acc[i]->Bank_ID==accId)
						// {
							//DisplayAccount(acc[i]);
						// }
					// }
				}
				
				else if (ad == 3)
				{
					break;
				}
				
				else
				{
					printf("\nWrong choice ! \n");
				}
			}
		}
				
		else if(user == 2)
		{
			login();
				while(1)
				{
				printf("\n- choose user option \n\n 1- Make Transaction \n 2- Change Account Password \n 3- Get Cash \n 4- Deposite in Account \n 5- Return to main Menu \n\n your choose :");
				scanf("%d",&cl);
				
				if (cl == 1)
				{
					
				}
						
				else if (cl == 2)
				{
					
				}
					
				else if (cl == 3)
				{
					
				}
				
				else if (cl == 4)
				{
					
				}

				else if (cl == 5)
				{
					break;
				}
				else
				{
					printf("\nWrong choice ! \n");
				}	     
				}

		}

		else if (user == 3) 
		{
			printf("\n ********** have a nice day :) **********\n");
			break;
		}
			
	}

    return 0;
}

void createAccount(client* num)
{
	client accountInformation;

    printf("\n******** Create New Client Account ********\n\n");

    printf(" Full Name : ");
    scanf("%s", &accountInformation.Full_name);
	
    printf(" Bank ID : ");
    scanf("%d", &accountInformation.Bank_ID);
	
    printf(" Age : ");
    scanf("%d", &accountInformation.Age);
	_flushall();
	
    printf(" Address : ");
    scanf("%s",&accountInformation.Full_address);
	_flushall();
	
    printf(" National ID : ");
    scanf("%d", &accountInformation.National_ID);
	_flushall();
	
    printf(" Account Balance : ");
    scanf("%.2f", &accountInformation.Balance);
	_flushall();
	
	printf(" Account Status : ");
    scanf("%s", &accountInformation.Account_status);
	_flushall();
	
	password(accountInformation.Password);
	printf(" Password : %s",&accountInformation.Password);
	
}

void DisplayAccount(client *num)
{
	client accountInformation;
	
    printf("\n******** Client Account ********\n");

    printf("\n Full Name : %s", accountInformation.Full_name);
	
    printf("\n Bank ID : %d", accountInformation.Bank_ID);
	
    printf("\n Age : %d", accountInformation.Age);
	
    printf("\n Address : %s", accountInformation.Full_address);
	
    printf("\n National ID : %d", accountInformation.National_ID);

    printf("\n Account Balance : %.2f", accountInformation.Balance);

	printf("\n Account Status : %s", accountInformation.Account_status);

	printf("\n Password : %s",accountInformation.Password);

}

void password(char *pass) 
{
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%&*_QWERTYUIOPASDFGHJKLZXCVBNM,.";
	srand(time(NULL));
	for(int i = 0; i < 10; i++) 
	{
	   pass[i]= list[rand() % (sizeof list - 1)];	
	}
}

void login()
{
	char usr[15], pss[10];
	_flushall();
	printf("\n enter username : ");
	gets(usr);
	
	printf(" enter password : ");
	gets(pss);
	_flushall();

}

