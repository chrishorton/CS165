#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

void SelectionSort(int arr[], int size) {
    int i, j, minimum;

    for (i = 0; i < size-1; i++)
    {
        minimum = i;
        for (j = i+1; j < size; j++)
            if (arr[j] < arr[minimum])
                minimum = j;

        swap(arr[minimum], arr[i]);
    }
}

int binarySearch(int arr[], int max, int target) {
    int guess, min, guesses;
    min = 0;
    guesses = 0;
    while (min <= max)
    {
        guess = (int)(((max + min) / 2) + 0.5);
        if (target == arr[guess]) {
            break;
        } else if (arr[guess] < target) {
            min = guess + 1;
        } else {
            max = guess - 1;
        }
        guesses++;
    }
    return guesses;
}

int SequentialSearch(int arr[], int SIZE, int target)
{
    int count = 0;

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i]==target)
            return count;
        count ++;
    }
    return count;
}

int main()
{
    int SIZE = 100;
    int arr[SIZE];

    srand(time(0));

    /// Populate the array with 100 integers in the range from 1 to 100.
    for (int i = 0; i < SIZE; ++i)
        arr[i] = rand()%100;

    /// Display the 100 integers in 10 rows, 10 numbers in a row.
    for (int j = 0; j < SIZE; ++j) {

        /// to line up single digits, prepend with zero


        /// Every 10th number insert a new line
        if (j%10==0)
            cout << endl;

        if (arr[j]>=10)
            cout << arr[j] << " ";

        if(arr[j]<10)
            cout << "0" << arr[j] << " ";
    }
    int arrayOfRand[SIZE];
    int target;
    int max = 100;
    int totalSearches=0;
    /// Generate 10 random numbers in the range from 1 to 100.
    /// Use SequentialSearch() to search the 10 numbers in the array.
    /// Display a report of the search result.

    string spaces = "       ";
    cout << endl << endl << endl;
    for (int k = 0; k < 10; ++k) {
        target = rand() % max;
        arrayOfRand[k] = target;

        int searchResult = SequentialSearch(arr, SIZE, target);
        totalSearches += searchResult;

        if (searchResult<10)
            cout << k << spaces << target << spaces << "0" << searchResult << endl;
        else if (target < 10)
            cout << k << spaces << "0" << target << spaces << searchResult << endl;
        else
            cout << k << spaces << target << spaces << searchResult << endl;
    }
    cout << "\nAverage: " << totalSearches/10 << endl;

    /// Use SelectionSort() to sort the array.
    SelectionSort(arr, SIZE);


    /// With the same 10 random numbers, use the BinarySearch() to search them in the array.
    /// Display a report of the search result.
    totalSearches = 0;

    cout << endl << endl;

    for (int l = 0; l < 10; ++l) {
        target = arrayOfRand[l];

        int searchResult = binarySearch(arr,SIZE,target);

        if (searchResult<10)
            cout << l << spaces << target << spaces << "0" << searchResult << endl;
        else if (target < 10)
            cout << l << spaces << "0" << target << spaces << searchResult << endl;
        else
            cout << l << spaces << target << spaces << searchResult << endl;
        totalSearches += searchResult;
    }
    cout << "\nAverage: " << totalSearches/10 << endl;

    for (int j = 0; j < SIZE; ++j) {
        /// Every 10th number insert a new line
        if (j%10==0)
            cout << "\n";

        if (arr[j]>=10)
            cout << arr[j] << " ";

        /// just to line the first row up with the others, prepend with a zero
        if(arr[j]<10) {
            cout << "0" << arr[j] << " ";
        }
    }

    return 0;
}