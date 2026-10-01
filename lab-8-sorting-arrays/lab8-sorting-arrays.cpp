/******************************************************************************
Course name/ section: CSCI-1943-M01
Lab Title: Lab 8 – Sorting Arrays
Names: Earlniecia Parker, Monika Sandlin, Xzavier James Ware, Latadrian Thomas, &
Nkengaka Ajarbwoa
Date: 24 September 2026
-------------------------------------------------------------------------------
                                Requirements:
                                  {Part 1}
1. Must Declare an integer array with 10 elements+
- array name
2. Initialize the array with unsorted values (request input from user)
3. Print unsorted array
4. sort array in ascending order (bubble or selection sort)
5. prints sorted array on ONE line
6. sorting logic implemented in a separate function

*******************************************************************************/
/* 

Earlniecia Parker 

Block Comment with  

Course info, names, etc. 

10:58am 

9/24/2026 

*/ 

/* 

Monika Sandlin 

Header file 

11:00am 

9/24/2026 

*/ 

/* 

Earlniecia Parker 

Requirements. 

11:45pm 

9/24/2026 

*/
/*
Monika Sandlin
Pseudocode
9/24/2026
*/
/*
Earlniecia Parker
main code and bubbleSort 
functions
12:32pm
9/25/2026
*/

#include "header.h"
#include <iostream>

//prototype functions
void bubbleSort(int[], int);
void swap(int &, int &);

int main()
{
    //Declare integer array (named values) with 10 elements
    //array is initialized with hardcoded unsorted values
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE] = {64, 25, 12, 22, 11, 90, 45, 33, 7, 50};
    
    //print original array; unsorted
    cout << "These are the values unsorted: \n";
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << numbers[i] << " ";
    cout << endl;
    
    //Array gets sorted
    bubbleSort (numbers, ARRAY_SIZE);
    
    //display sorted array
    cout << "These are the values sorted: \n";
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << numbers[i] << " ";
    cout << endl;
    
/*******************************************************************************
                       Part 2: Test Cases // LaTadrian Thomas
*******************************************************************************/
    //* Creating case sorted, reverse, and mixed arrays.*//
    const int test_size = 10;
    int sorted[test_size] = {1,2,3,4,5,6,7,8,9,10};
    int reverse[test_size] = {10,9,8,7,6,5,4,3,2,1};
    int mixed[test_size] = {5,2,3,4,5,2,4,9,5,9};
    
    cout << "\nPart 2: TEST CASES\n\n*ALREADY SORTED ARRAY CASE*\nThe 'sorted[]' array is already hard-coded in ascending order.\nIn this case, after using the 'bubbleSort()' function, there will be no visual difference: \n\n";
    
    //* For loop to print the unsorted array*//
    cout << "Unsorted: "; 
    for (int i = 0; i < test_size; i++){
        cout << sorted[i] << " ";
    }
    
    cout << endl;
    
    //* Calling bubbleSort() function on sorted[] array*// 
    bubbleSort(sorted, test_size);
    
    //* For loop to print the sorted sorted[] array *//
    cout << "Sorted: ";
    for (int i = 0; i < test_size; i++){
        cout << sorted[i] << " ";
    }
    cout << endl << endl;
    

    cout << "*REVERSE SORTED ARRAY CASE*\nThe 'reverse[]' array is sorted in descending order.\nAfter using the bubbleSort() function, 'reverse[]' will go from being sorted \nin descending numerical order, to ascending numerical order: \n\n";
    
    //* For loop to print the unsorted reverse[] array*//
    cout << "Unsorted: ";
    for (int i = 0; i < test_size; i++){
        cout << reverse[i] << " ";
    }
    cout << endl;
    
    //* Calling bubbleSort() function and passing the reverse[] array.*/
    bubbleSort(reverse, test_size);
    
    //* For loop to print the sorted reverse[] array.*//
    cout << "Sorted: ";
    for (int i = 0; i < test_size; i++){
        cout << reverse[i] << " ";
    }
    cout << endl << endl;
    
    
    cout << "**MIXED ARRAY CASE**\nLastly, the 'mixed[]' array is unsorted numerically, and has repeating numbers within.\nAfter using the bubbleSort() function, the array will be sorted from least to greatest.\n\n";
    
    //* For loop to print the unsorted mixed[] array*//
    cout << "Unsorted: ";
    for (int i = 0; i < test_size; i++){
        cout << mixed[i] << " ";
    }
    cout << endl;
    
    //* Calling bubbleSort() and passing mixed[] array*//
    bubbleSort(mixed, test_size);
    
    //* For loop to print the sorted mixed[] array*//
    cout << "Sorted: ";
    for (int i = 0; i < test_size; i++){
        cout << mixed[i] << " ";
    }
    cout << endl << endl;
    
    //end of main function
    return 0;
}
/*******************************************************************************
                       Bubble sort function here
*******************************************************************************/
void bubbleSort (int array[], int size) //bubbleSort function
{
    //initializing maxElement and the counter (index)
    int maxElement;
    int index;
   //the values  
    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index +1])
            {
                swap(array[index], array[index + 1]);
            }
        }
    }
}
/***********************
 Sort in ascending order 
***********************/
void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}



