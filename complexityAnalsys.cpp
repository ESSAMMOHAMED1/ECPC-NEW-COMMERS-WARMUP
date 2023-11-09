#include <bits/stdc++.h>
using namespace std;


// OP vs input 


//========================================================================================

//Cases :

//Best case 

//averge case

//worst case 

//=======================================================================================

//*Rules
// 1 - running time is the some of running times of all consecutive blocks
// 2 - nested loops are multiplied
// 3 -  


 //Rules:

// 1- Running time is the sum of running times of all consecutive blocks.
// 2- Nested loops are multiplied.

// In general -> Nested repetitive Blocks are multiplied.

// 3- In Conditional statements pick the "Worst case" one.

// 4- Drop Constants (addition, subtraction, multiplication or division).

// 5- Drop all lower order terms.

















void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {

        min_idx = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}






/// O(n^2)
///================================================================================

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;

    for (i = 0; i < n - 1; i++)
    {

        swapped = false;

        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}










/// O(n^2)
///====================================================================================
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}













/// O(n^2)
///=========================================================================================





