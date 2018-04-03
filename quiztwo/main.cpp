#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;



struct Person {

    int ID = -1;

    string Name;

    string PhoneNo;

};



void BubbleSort(Person arr[], int SIZE) {
    /// TO DO: Add your code here

    for (int i = 0; i < SIZE-1; i++) {
        for (int j = 0; j < SIZE-i; j++) {
            if (arr[j].ID > arr[j+i].ID) {
                Person temp = arr[j];
                arr[j] = arr[j+i];
                arr[j+i] = temp;
            }
        }
    }

    // Function is void no need to return.
//    return;

}



int SequentialSearch(Person arr[], int SIZE, int target) {

    int index =-1;

    /// TO DO: Add your code here

    for (int i = 0; i < SIZE; ++i) {
        int currentID = arr[i].ID;
        if (currentID == target) {
            return i;
        }
    }

    return index;

}



void displayPersonInfo(Person arr[], int SIZE, int ii) {
// Why is size needed?

// ii is the index of the person to be displayed
    Person p = arr[ii];
    /// TO DO: Add your code here
    cout << "ID: " << p.ID << "\n" << "Name: " << p.Name << "\n" << "Phone number: " << p.PhoneNo << endl;

    return;

}



int main() {

    const int SIZE = 29;

    Person arr[SIZE];

    int target = 22222;

    /// Add your code here to load the data

    string filename = "/Users/chris/CLionProjects/CS165/quiztwo/person.txt";

    // Declare vars for input
    int ID=0;
    string Name;
    string phoneNumber;

    // Begin loading input data to Person arr
    fstream inputFile;

    inputFile.open(filename.c_str(), ios::in);
    int count = 0;

    if(inputFile.good()) {
        while (!inputFile.eof()) {
            inputFile >> ID >> Name >> phoneNumber;
            Person p;
            p.ID = ID;
            p.Name = Name;
            p.PhoneNo = phoneNumber;
            arr[count] = p;
            count++;
        }
    }

    // sort the array by ID
    BubbleSort(arr, SIZE);

    // Print array after sorted


    // Search for an ID
    // PARAMS: arr: arr of type Person, SIZE of that array, target: ID to be searched for
    int ii = SequentialSearch(arr, SIZE, target); /// Return the index of the record if the target is found.

    if (ii != -1)
        // ii is index of person to display
        displayPersonInfo(arr, SIZE, ii);

    return 0;

}