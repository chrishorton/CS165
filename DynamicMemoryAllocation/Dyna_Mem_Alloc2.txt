/*
    Discussion:

    When we say "newing" an array, there are actually two different meanings:

    (1) Type 1: Array of pointers
        Declare an array and new each one of its elements. (This is the type which will be used
        in Polymorphism.

    (2) Type 2: Array of objects
        new the entire array all at a time.

    Well, you can create various types of arrays. But these two types are the most commonly used ones.

*/

#include <iostream>

using namespace std;

const int SIZE3 = 3;

int main()
{
    /// Type 1
    cout << "Type 1" << endl;
    int * arr[SIZE3] = {nullptr};
    for (int i = 0; i < SIZE3; i++)
    {
        arr[i] = new int;
        *arr[i] = 1000 + i;
    }

    for (int i = 0; i < SIZE3; i++)
    {
        cout << *arr[i] << endl;
    }

    /// When deleting the array, we need to delete each element one at a time.
    for (int i = 0; i < SIZE3; i++)
    {
        delete arr[i];
    }

    /// Type 2
    cout << endl << endl;
    cout << "Type 2" << endl;
    int * arr2 = nullptr;
    arr2 = new int[SIZE3];

    for (int i = 0; i < SIZE3; i++)
    {
        arr2[i] = 2000 + i;
    }

    for (int i = 0; i < SIZE3; i++)
    {
        cout << arr2[i] << endl;
    }

    /// When deleting the array, we delete all at once.
    delete [] arr;

    return 0;
}
