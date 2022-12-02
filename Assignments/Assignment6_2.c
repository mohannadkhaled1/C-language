/* Write a C code that define 3 int variables x, y and z and 3 pointers to int p, q
and r. Set x, y, z to three distinct values. Set p, q, r to the addresses of x, y, z
respectively.
a- Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
b- Print the message: Swapping pointers.
c- Execute the swap code: r = p; p = q; q = r;
d- Print with labels the values of x, y, z, p, q, r, *p, *q, *r. */

#include<stdio.h>

int main()
{
	int x=3,y=4,z=5;
	int *p=&x;
	int *q=&y;
	int *r=&z;
	int *temp;
	printf("x value = %d\n",x);
	printf("y value = %d\n",y);
	printf("z value = %d\n",z);
	printf("p value = %p\n",p);
	printf("q value = %p\n",q);
	printf("r value = %p\n",r);	
	printf("*p value = %d\n",*p);
	printf("*q value = %d\n",*q);
	printf("*r value = %d\n",*r);
	
	printf("\nSwapping pointers \n\n"); 
	
	temp=r;
	r=p;
	p=q;
	q=temp;
	
	printf("x value = %d\n",x);
	printf("y value = %d\n",y);
	printf("z value = %d\n",z);
	printf("p value = %p\n",p);
	printf("q value = %p\n",q);
	printf("r value = %p\n",r);	
	printf("*p value = %d\n",*p);
	printf("*q value = %d\n",*q);
	printf("*r value = %d\n",*r);
	
	return 0;
}
