/* Write C code that manage a small school. The school has 3 classes each class
contains 10 students. Define three arrays for the three classes each one with a
length of 10. Save a random numbers in all array elements to indicate the
students grade. The program will calculate and display the following statistics:
1- Number of passed students
2- Number of Failed students
3- Highest grade
4- Lowest grade
5- Average grade
Knowing that the total grade is from 100 and the minimum passing grade is 50. */

#include<stdio.h>

int main()
{
	int i, sum=0, pass=0, fail=0; 
	int arr1[10]={56,87,45,89,35,87,78,15,98,65};
	int arr2[10]={32,78,76,23,90,98,73,63,54,44};
	int arr3[10]={91,43,56,79,42,99,66,18,84,67};
	int max=arr1[0], min=arr1[0];
	
	for(i=0; i<10; i++)
	{
		sum+=arr1[i];
		if(max<arr1[i])
			max=arr1[i];
		if(min>arr1[i])
			min=arr1[i];
		if(arr1[i]>=50)
			pass++;
		if(arr1[i]<50)
			fail++;
	}
	
	for(i=0; i<10; i++)
	{
		sum+=arr2[i];
		if(max<arr2[i])
			max=arr2[i];
		if(min>arr2[i])
			min=arr2[i];
		if(arr2[i]>=50)
			pass++;
		if(arr2[i]<50)
			fail++;
	}
	
	for(i=0; i<10; i++)
	{
		sum+=arr3[i];
		if(max<arr3[i])
			max=arr3[i];
		if(min>arr3[i])
			min=arr3[i];
		if(arr3[i]>=50)
			pass++;
		if(arr3[i]<50)
			fail++;
	}
	
	printf("\nNumber of passed students = %d",pass);
	printf("\nNumber of Failed students = %d",fail);
	printf("\nHighest grade = %d",max);
	printf("\nLowest grade = %d",min);
	printf("\nAverage grade = %d",sum/30);
	printf("\n");
	return 0;
}
