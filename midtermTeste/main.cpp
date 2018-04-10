#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include<ctime>


using namespace std;

void SelectionSort(int arr[], int SIZE)
{
    int start, minIndex;
    int temp;
    double minValue;

    for (start = 0; start < (SIZE - 1); start++)
    {
        minIndex = start;
        minValue = arr[start];
        temp = arr[start];
        for (int index = start + 1; index < SIZE; index++)
        {
            if (arr[index] < minValue)
            {
                temp = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[start];
        arr[start] = temp;
    }
}

int SequentialSearch(int arr[], int SIZE, int target)
{
    int index = 0, NoOfKeyComp = 0;
    while ((index < SIZE) && (target != arr[index]))
    {
        if (arr[index] != target)
        {
            index++;
            NoOfKeyComp++;
        }
    }
    return NoOfKeyComp;
}

int BinarySearch(int arr[], int SIZE, int target)
{
    int first = 0, last = SIZE-1, mid, position = -1, NoOfKeyComp = 0;
    bool found = false;

    while (!found && first <= last)
    {
        mid = (first + last) / 2;
        if (arr[mid] == target)
        {
            found = true;
            position = mid;
        }
        else if (arr[mid] > target)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
        NoOfKeyComp++;
    }
    return NoOfKeyComp;
}

int main()
{
    const int SIZE = 100;
    int arr[SIZE], randnum[SIZE];
    int target = 0, key = 0, tot1 = 0, tot2 = 0;
    double avg1 = 0, avg2 = 0;

/// Populate the array with 100 integers in the range from 1 to 100.
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

/// Display the 100 integers in 10 rows, 10 numbers in a row.
    int n1 = 0;
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            cout << setw(3) << arr[n1++] << " ";
        }
        cout << endl;
    }
    cout << endl;

/// Generate 10 random numbers in the range from 1 to 100.
    for (int i = 0; i < 10; i++)
    {
        randnum[i] = rand() % 100 + 1;
    }

/// Use SequentialSearch() to search the 10 numbers in the array.
/// Display a report of the search result.
    cout << " Search Target \t" << "# of Key Comparisons \n";
    cout << " ============== \t" << "==================== \n";
    for (int i = 0; i < 10; i++)
    {
        target = randnum[i];
        key = SequentialSearch(arr, SIZE, target);
        cout << i + 1 << ". \t" << target << "\t\t";
        if (key == SIZE)
            cout << key << "(Not found)\n";
        else
            cout << key << endl;
        tot1 += key;
    }
    avg1 = tot1 / 10;
    cout << "===========================================\n";
    cout << "Average \t\t" << avg1 << endl << endl;

/// Use SelectionSort() to sort the array.
/// With the same 10 random numbers, use the BinarySearch() to search them in the array.
/// Display a report of the search result.
    SelectionSort(arr, SIZE);
    cout << " Search Target \t" << "# of Key Comparisons \n";
    cout << " ============== \t" << "==================== \n";
    for (int i = 0; i < 10; i++)
    {
        target = randnum[i];
        key = BinarySearch(arr, SIZE, target);
        cout << i + 1 << ". \t" << target << "\t\t";
        if (key == SIZE)
            cout << key << "(Not found)\n";
        else
            cout << key << endl;
        tot2 += key;
    }
    avg2 = tot2 / 10;
    cout << "===========================================\n";
    cout << "Average \t\t" << avg2 << endl << endl;

/// Display the 100 integers in 10 rows, 10 numbers in a row. After SelectionSort()
    int n2 = 0;
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            cout << setw(3) << arr[n2++] << " ";
        }
        cout << endl;
    }

//system("PAUSE");
    return 0;
}