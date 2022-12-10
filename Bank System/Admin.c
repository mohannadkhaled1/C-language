#include "Admin.h"
#include "Client.h"
#include "Account.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

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

    printf("\n Full Name : %s", num->Full_name);
	
    printf("\n Bank ID : %d", num->Bank_ID);
	
    printf("\n Age : %d", num->Age);
	
    printf("\n Address : %s",num->Full_address);
	
    printf("\n National ID : %s", num->National_ID);

    printf("\n Account Balance : %.2lf",num->Balance);

	printf("\n Account Status : %s", num->Account_status);

	printf("\n Client Password : %s", num->Password);

}

void password(char *num) 
{
char pass[10]={0};
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%&*_QWERTYUIOPASDFGHJKLZXCVBNM,.";
	srand(time(NULL));
	for(int i = 0; i < 10; i++) 
	{
	   pass[i]= list[rand() % (sizeof list - 1)];	
	}
	strcpy(num,pass);
}