/// Step 1: Complete the Bubble Sort function
/// Step 2: Implement a sequential search function which return the index of the target.
/// Step 3: Can we use the sorting function to sort an array of struct objects?
/// For example, we can sort the students records using their IDs.

#include <iostream>
using namespace std;

int search(int arr[], int target){
    int index=0;
    bool present = false;

    while (!present) {
        if (arr[index] == target)
            return index;

        index ++;
    }
    
    return index;
}



void Bubble_Sort(int arr[], int SIZE){
/// TO DO: Add your code here

    for (int i = 0; i < SIZE-1; i++) {
        for (int j = 0; j < SIZE-i; j++) {
            if (arr[j] > arr[j+i]) {
                int temp = arr[j];
                arr[j] = arr[j+i];
                arr[j+i] = temp;
            }
        }
    }
}

int main(){
    const int SIZE = 9;
    int arrInt[SIZE] = {3, 6, 4, 2, 10, 2, 5, 8, 1};
    for (int i = 0; i < SIZE; i++)
        cout << arrInt[i] << " ";
    cout << endl;
    Bubble_Sort(arrInt, SIZE);
    for (int i = 0; i < SIZE; i++)
        cout << arrInt[i] << " ";
    cout << endl;


    cout << search(arrInt, 6) << endl;

    double thisisadouble;
    float thisisafloat;

    cout << sizeof(thisisadouble) << ": Size of double" << "\n" << sizeof(thisisafloat) << ": Size of float";
    return 0;
}