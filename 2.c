// Complexity Analysis for Insertion Sort

// C++ program for insertion sort
#include <stdio.h>
#include <time.h>
#include <math.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int n, int arr[])
{
    int i, k, j;
    for (i = 1; i < n; i++)
    {
        k = arr[i];
        j = i - 1;
        /*shifting elements of arr[0..i-1] towards right
		  if are greater than k */
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}
int main()
{
    int M;
    printf("Enter Max size of array : ");
    scanf("%d", &M);

    printf("\nAVERAGE CASE __________\n");
    for (int j = 2000; j <= M; j+=2000)
    {
        int arr[j];

        clock_t start1,end1;
        long long t1;

        for (int i = 0; i < j; i++) { arr[i]=100*sin(i) + 1; } // AVERAGE CASE
            start1=clock();
            insertionSort(j, arr);
            end1=clock();
        t1=end1-start1;
        printf("    n=%d : %.3f sec\n", j, (double)t1/(double)CLOCKS_PER_SEC);
    }

    printf("\nBEST CASE __________\n");
    for (int j = 2000; j <= M; j+=2000)
    {
        int arr[j];

        clock_t start1,end1;
        long long t1;

        for (int i = 0; i < j; i++) { arr[i]=i ;} // BEST CASE
            start1=clock();
            insertionSort(j, arr);
            end1=clock();
        t1=end1-start1;
        printf("    n=%d : %.3f sec\n", j, (double)t1/(double)CLOCKS_PER_SEC);
    }

    printf("\nWORST CASE __________\n");
    for (int j = 2000; j <= M; j+=2000)
    {
        int arr[j];

        clock_t start1,end1;
        long long t1;

        for (int i = 0; i < j; i++) { arr[i]=j+1-i; } // WORST CASE
            start1=clock();
            insertionSort(j, arr);
            end1=clock();
        t1=end1-start1;
        printf("    n=%d : %.3f sec\n", j, (double)t1/(double)CLOCKS_PER_SEC);
    }

    return 0;  
}
