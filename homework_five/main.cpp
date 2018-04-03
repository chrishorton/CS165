#include <iostream>
#include <fstream>

using namespace std;

int personCount;

struct Person {

    int ID = -1;

    string Name;

    string PhoneNo;

};

void selectionSort(Person array[], int size){
    int start, minIndex, minValue;
    for (start = 0; start < (size-1); start++) {
        minIndex = start;
        minValue = array[start].ID;
        for (int i = start+1; i < size; ++i) {
            if (array[i].ID < minValue) {
                minValue = array[i].ID;
                minIndex = i;
            }
        }
        // Swap values
        array[minIndex] = array[start];
        array[start].ID = minValue;
    }
}


void displayPersonInfo(Person arr[], int SIZE, int ii) {
// Why is size needed?

// ii is the index of the person to be displayed
    Person p = arr[ii];
    /// TO DO: Add your code here
    cout << "ID: " << p.ID << "\n" << "Name: " << p.Name << "\n" << "Phone number: " << p.PhoneNo << endl;

    return;

}

int SequentialSearch(Person arr[], int SIZE, int target) {

    int index =-1;

    for (int i = 0; i < SIZE; ++i) {
        int currentID = arr[i].ID;
        if (currentID == target) {
            return i;
        }
    }

    return index;

}



void displayAll(Person arr[], int SIZE){
    int i = 0;
    while (arr[i].ID != -1){
        cout << arr[i].ID << "  "<< arr[i].Name << "  " << arr[i].PhoneNo << endl;
        i++;
    }
}

void BubbleSort(Person arr[], int SIZE){

    bool swap;
    Person temp;

    do {
        swap = false;
        for (int i = 0; i < SIZE-1; ++i) {
            if (arr[i].ID > arr[i + 1].ID) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i + 1] = temp;
                swap = true;
            }

        }
    } while (swap);
}

int main() {
    fstream inputFile;
    string fileName = "/Users/chris/CLionProjects/CS165/homework_five/StudentRecords.txt";
    const int SIZE = 29;
    Person arr[SIZE];
    int target = 22222;
    int ID2 = 0;
    string Name2, PhoneNo2 = " ";
    inputFile.open(fileName.c_str(), ios::in);

    if (inputFile.is_open()) {
        int personCount = 0;

        while (!inputFile.eof()) {
            inputFile >> ID2 >> Name2 >> PhoneNo2;
            arr[personCount].ID = ID2;
            arr[personCount].Name = Name2;
            arr[personCount].PhoneNo = PhoneNo2;
            personCount++;
        }
        inputFile.close();
    } else {
        cout << "File cannot be opened." << endl;
    }
    cout << "Before Bubble Sort" << endl;

    displayAll(arr, personCount);
    BubbleSort(arr, personCount);
    cout << "After Bubble Sort" << endl;
    displayAll(arr, personCount);
    int ii = SequentialSearch(arr, personCount, target);

/// Return the index of the record if found

    if (ii != -1) {
        cout << "Display personal information of 22222 " << endl;
        displayPersonInfo(arr, personCount, ii);
    }
/// Read data from input file to the array again so that the IDs are not sorted.
    cout << "Before Selection Sort" << endl; displayAll(arr, personCount); selectionSort(arr, personCount);
    cout << "After Selection Sort" << endl; displayAll(arr, personCount);
//    ii = binary_search(arr, personCount, target);
//    if (ii != -1) {
//        cout << "Display personal information of 22222 " << endl;
//        displayPersonInfo(arr, personCount, ii);
//    }
    return 0;
}