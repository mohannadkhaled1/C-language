#include "Admin.h"
#include "Client.h"
#include "Account.h"
#include <stdio.h>
#include <string.h>


void OpenAccount(client* num)
{
	printf("\n******** Client Account ********\n");

    printf("\n Full Name : %s", num->Full_name);
	
    printf("\n Bank ID : %d", num->Bank_ID);
	
    printf("\n Age : %d", num->Age);
	
    printf("\n Address : %s", num->Full_address);
	
    printf("\n National ID : %s", num->National_ID);

    printf("\n Account Balance : %.2lf", num->Balance);

	printf("\n Account Status : %s", num->Account_status);

}