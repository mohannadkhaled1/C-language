/* Write a C code that ask the user to enter 10
numbers, then ask him to enter another number
to search on it in the 10 numbers and print its
location in case it is found.
In case the number is not found, it will print
number no exist */

#include<stdio.h>

int main()
{
	int a[10],x,y;

	for (int i=0 ; i<10; i++)
	{
		printf("enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}

	printf("Enter the value to search: ");
	scanf("%d",&x);
	for (int i=0 ; i<10; i++)
	{
		if(x==a[i])
			y=i;
	}
	if(x==a[y])
			printf("Value is exist at element number %d",y+1);
		else
			printf("number not exist");
	
	return 0 ;
}