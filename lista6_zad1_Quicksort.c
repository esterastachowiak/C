#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/* C implementation QuickSort */

// A utility function to swap two elements 
void
swap (int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int
partition (int arr[], int low, int high)
{
  int pivot = arr[high];	// pivot 
  int i = (low - 1);		// Index of smaller element 

  for (int j = low; j <= high - 1; j++)
    {
      // If current element is smaller than the pivot 
      if (arr[j] < pivot)
	{
	  i++;			// increment index of smaller element 
	  swap (&arr[i], &arr[j]);
	}
    }
  swap (&arr[i + 1], &arr[high]);
  return (i + 1);
}

/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void
quickSort (int arr[], int low, int high)
{
  if (low < high)
    {
      /* pi is partitioning index, arr[p] is now 
         at right place */
      int pi = partition (arr, low, high);

      // Separately sort elements before 
      // partition and after partition 
      quickSort (arr, low, pi - 1);
      quickSort (arr, pi + 1, high);
    }
}

/* Function to print an array */
void
printArray (int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    printf ("%d ", arr[i]);
  printf ("n");
}

// Driver program to test above functions 
int
main ()
{
  int arr[] = {12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 1, 3, 2, 4, 5, 6, 5, 8, 5, 6, 5, 4, 11, 47, 4, 9, 5, 74, 5, 1, 44, 18, 65, 44, 35, 22, 11, 69, 58, 45, 47, 15, 22, 54, 14, 25, 15, 17, 14, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 1 , 3, 2, 4, 5, 6, 5, 8, 5, 6, 5, 4, 11, 47, 4, 9, 5, 74, 5, 1, 44, 18, 65, 44, 35, 22, 11, 69, 58, 45, 47, 15, 22, 54, 14, 25, 15, 17, 14,};
  int n = sizeof (arr) / sizeof (arr[0]);
  clock_t start = clock();
  quickSort (arr, 0, n - 1);
  clock_t end = clock();
  float secs = (float)(end-start) / CLOCKS_PER_SEC;
  printf ("Sorted array: n");
  printArray (arr, n);
  printf("Time: %f", secs);
  return 0;
}