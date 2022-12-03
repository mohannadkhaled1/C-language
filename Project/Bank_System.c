#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

typedef struct account
{
    char Full_name[160];
	int Bank_ID;
	int Age;
    char Full_address[160];
    char National_ID[14];
	char GuardianNational_ID[14];
	double Balance;
    char Account_status[10];
	char Password[10];
	
}client;

void createAccount(client* num);
void DisplayAccount(client* num);
void OpenAccount(client* num);
void password(char *pass);

int main() 
{
	client *acc[100];
	int user, ad, cl, id, BID, bnkID, i, mt;
	char AS[10];
	double MT;
	
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
				printf("\n\n- choose option \n\n 1- Create New Account \n 2- Open Existing Account \n 3- Return To Main Menu \n\n your choose :");
				scanf("%d",&ad);

				if (ad == 1)
				{
					for(int i=0; i<100; i++)
					{
						if (acc[i]==NULL)
						{
							acc[i]=(client*)malloc(sizeof (client));
							createAccount(acc[i]);
							printf("\n");
							DisplayAccount(acc[i]);
							break ;
						}
					}	
				}
						
				else if (ad == 2)
				{
					printf("\n Enter Account Bank ID : ");
					scanf("%d",&bnkID);
					for(int i=0; i<100; i++)
					{
						if (acc[i]->Bank_ID==bnkID)
						{
							OpenAccount(acc[i]);
							BID=bnkID;
							
							while(1)
							{
							printf("\n\n- choose user option \n\n 1- Make Transaction \n 2- Change Account Status \n 3- Get Cash \n 4- Deposite in Account \n 5- Return to main Menu \n\n your choose :");
							_flushall();
							scanf("%d",&cl);
							
							if (cl == 1)
							{
								printf("\n Enter Amount of money to transfer : ");
								scanf("%lf",&MT);
								_flushall();
								printf("\n Enter Acount Bank ID you want to transfer : ");
								scanf("%d",&mt);
								// for(int j=0; j<100; j++)
								// {
									// if (acc[j]->Bank_ID==mt)
									// {
										// acc[j]->Balance= acc[j]->Balance+MT;
									// }
								// }
								acc[i]->Balance= acc[i]->Balance-MT;
								OpenAccount(acc[i]);
								printf("\n***** Transaction is done successfuly *****\n");
							}
									
							else if (cl == 2)
							{
								printf("\n Account Status : ");
								scanf("%s",&acc[i]->Account_status);
								OpenAccount(acc[i]);
								printf("\n***** Account status changed successfuly *****\n");
							}
								
							else if (cl == 3)
							{
								printf("\n Enter Amount of money to get : ");
								scanf("%lf",&MT);
								acc[i]->Balance= acc[i]->Balance-MT;
								OpenAccount(acc[i]);
								printf("\n***** Withdraw cash is done successfuly *****\n");
							}
							
							else if (cl == 4)
							{
								printf("\n Enter Amount of money to deposite : ");
								scanf("%lf",&MT);
								acc[i]->Balance= acc[i]->Balance+MT;
								OpenAccount(acc[i]);
								printf("\n***** Deposite is done successfuly *****\n");
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
							
							break;
						}
						else
						{
							printf("\n Wrong Account Bank ID !! \n");
							break;
						}
					}
					

				}
				
				else if (ad == 3)
				{
					break;
				}
				
				else
				{
					printf("\n Wrong choice ! \n");
				}
			}
		}
				
		else if(user == 2)
		{
			//char pss[10];
			printf("\n Enter Your Bank ID : ");
			scanf("%d",&bnkID);
			for(int i=0; i<100; i++)
			{
				if (acc[i]->Bank_ID==bnkID)
				{
				// _flushall();
				// printf(" Enter Your Password : ");
				// scanf("%[^\n]",&pss);
				// _flushall();
				// if((acc[i]->Password==pss))
				// {
					OpenAccount(acc[i]);
					BID=bnkID;
					
					while(BID==bnkID)
					{
					printf("\n- choose user option \n\n 1- Make Transaction \n 2- Change Account Password \n 3- Get Cash \n 4- Deposite in Account \n 5- Return to main Menu \n\n your choose :");
					scanf("%d",&cl);
					
						if (cl == 1)
						{
							printf("\n Enter Amount of money to transfer : ");
							scanf("%lf",&MT);
							_flushall();
							printf("\n Enter Acount Bank ID you want to transfer : ");
							scanf("%d",&mt);
							// for(int j=0; j<100; j++)
							// {
								// if (acc[j]->Bank_ID==mt)
								// {
									// acc[j]->Balance= acc[j]->Balance+MT;
								// }
							// }
							acc[i]->Balance= acc[i]->Balance-MT;
							OpenAccount(acc[i]);
							printf("\n***** Transaction is done successfuly *****\n");
						}
								
						else if (cl == 2)
						{
							printf("\n Change Account Password : ");
							scanf("%s",&acc[i]->Password);
							OpenAccount(acc[i]);
							printf("\n New Password : %s",&acc[i]->Password);
							printf("\n***** Account Password changed successfuly *****\n");
						}
							
						else if (cl == 3)
						{
							printf("\n Enter Amount of money to get : ");
							scanf("%lf",&MT);
							acc[i]->Balance= acc[i]->Balance-MT;
							OpenAccount(acc[i]);
							printf("\n***** Withdraw cash is done successfuly *****\n");
						}
						
						else if (cl == 4)
						{
							printf("\n Enter Amount of money to deposite : ");
							scanf("%lf",&MT);
							acc[i]->Balance= acc[i]->Balance+MT;
							OpenAccount(acc[i]);
							printf("\n***** Deposite is done successfuly *****\n");
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
							
					break;
				// }	
				}					
				else
				{
					printf("\n Wrong Account Bank ID !! \n");
					break;
				}
			}
		}
		else if(user == 3) 
		{
			printf("\n ********** have a nice day :) **********\n");
			break;
		}
			
	}
    return 0;
}

void createAccount(client* num)
{
    printf("\n******** Create New Client Account ********\n\n");

    printf(" Full Name : ");
	_flushall();
    scanf("%[^\n]", num->Full_name);
	
    printf(" Bank ID : ");
    scanf("%d", &num->Bank_ID);
	_flushall();
    printf(" Age : ");
    scanf("%d", &num->Age);
	_flushall();
	
    printf(" Address : ");
	_flushall();
    scanf("%[^\n]",&num->Full_address);
	
    printf(" National ID : ");
    scanf("%s", &num->National_ID);
	_flushall();
	
    printf(" Account Balance : ");
    scanf("%lf", &num->Balance);
	_flushall();
	
	printf(" Account Status : ");
    scanf("%s", &num->Account_status);
	_flushall();
	
	password(num->Password);
	printf(" Password : %s",&num->Password);
	
}

void DisplayAccount(client* num)
{
	
    printf("\n******** Client Account ********\n");

    printf("\n Full Name : %s", &num->Full_name);
	
    printf("\n Bank ID : %d", num->Bank_ID);
	
    printf("\n Age : %d", num->Age);
	
    printf("\n Address : %s", &num->Full_address);
	
    printf("\n National ID : %s", &num->National_ID);

    printf("\n Account Balance : %.2lf", num->Balance);

	printf("\n Account Status : %s", &num->Account_status);

	printf("\n Client Password : %s", &num->Password);

}
void OpenAccount(client* num)
{
	printf("\n******** Client Account ********\n");

    printf("\n Full Name : %s", &num->Full_name);
	
    printf("\n Bank ID : %d", num->Bank_ID);
	
    printf("\n Age : %d", num->Age);
	
    printf("\n Address : %s", &num->Full_address);
	
    printf("\n National ID : %s", &num->National_ID);

    printf("\n Account Balance : %.2lf", num->Balance);

	printf("\n Account Status : %s", &num->Account_status);

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


