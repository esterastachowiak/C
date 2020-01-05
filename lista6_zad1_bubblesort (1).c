
// C program for implementation of Bubble sort 
#include <stdio.h> 
#include<time.h>  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 1, 3, 2, 4, 5, 6, 5, 8, 5, 6, 5, 4, 11, 47, 4, 9, 5, 74, 5, 1, 44, 18, 65, 44, 35, 22, 11, 69, 58, 45, 47, 15, 22, 54, 14, 25, 15, 17, 14, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 1 , 3, 2, 4, 5, 6, 5, 8, 5, 6, 5, 4, 11, 47, 4, 9, 5, 74, 5, 1, 44, 18, 65, 44, 35, 22, 11, 69, 58, 45, 47, 15, 22, 54, 14, 25, 15, 17, 14,}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
	clock_t start = clock();
    bubbleSort(arr, n); 
	clock_t end = clock();
	float secs = (float)(end-start)/CLOCKS_PER_SEC;
    printf("Sorted array: \n"); 
    printArray(arr, n); 
	printf("Time: %f", secs);
    return 0; 
} 





