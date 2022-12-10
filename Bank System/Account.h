#ifndef ACCOUNT_H
#define ACCOUNT_H

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

#endif