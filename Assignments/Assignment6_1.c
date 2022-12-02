/* Write a C code that defines a function which takes an array as input argument and
apply the bubble sorting algorithm on it, then print the result */

#include<stdio.h>
#define Size 5

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[Size] = {9,6,7,3,15};
	
    bubbleSort(arr, Size);
	
    printf("Sorted array: ");
	
    printArray(arr, Size);
	
    return 0;

}
