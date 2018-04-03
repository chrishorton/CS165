#include <iostream>

using namespace std;


int binarySearch(int arr[], int size, int target){
    int first = 0;
    int last = size-1;
    int middle = (first+last)/2;

    while ((first < last)) {
        middle = (first+last)/2;
        cout << middle << endl;

        if (arr[middle]==target){
            cout << "Found at index: " << middle << endl;
            return middle;
        } else {
            if (arr[middle] > target){
                last = middle-1;
            } else {
                first = middle+1;
            }
        }
    }
}

int selectionSort(int arr[], int size, int target){

}

    int main() {
        fstream inputFile;
        string fileName = "person.txt";
        const int SIZE = 29;
        Person arr[SIZE];
        int target = 22222;
        int ID2 = 0;
        string Name2, PhoneNo2 = " ";
        inputFile.open(fileName.c_str(), ios::in); if (inputFile.is_open()){
            int personCount = 0;

            while(!inputFile.eof()){
                inputFile >> ID2 >> Name2 >> PhoneNo2; arr[personCount].ID = ID2; arr[personCount].Name = Name2; arr[personCount].PhoneNo = PhoneNo2; personCount++;
            }
            inputFile.close(); }
        else {
            cout << "File cannot be opened." << endl;
        }
        cout << "Before Bubble Sort" << endl; displayAll(arr, personCount); BubbleSort(arr, personCount);
        cout << "After Bubble Sort" << endl; displayAll(arr, personCount);
        int ii = SequentialSearch(arr, personCount, target); if the target is found.
/// Return the index of the record

        if (ii != -1) {
            cout << "Display personal information of 22222 " << endl;
            displayPersonInfo(arr, personCount, ii); }
/// Read data from input file to the array again so that the IDs are not sorted.
        cout << "Before Selection Sort" << endl; displayAll(arr, personCount); SelectionSort(arr, personCount);
        cout << "After Selection Sort" << endl; displayAll(arr, personCount);
        ii = binarySearch(arr, personCount, target);
        if (ii != -1) {
            cout << "Display personal information of 22222 " << endl;
            displayPersonInfo(arr, personCount, ii); }
        return 0;
    }