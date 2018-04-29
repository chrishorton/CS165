#include<iostream>

#include<iomanip>

#define SIZE 5

using namespace std;

int main() {
    int values[SIZE] = {2,4,6,8,10};

    int *vPtr = values;

    //Question 1.

    cout << "\nQuestion 1 output \n\n";

    cout << "Array Subscript Notation" << endl;

    for ( int i = 0; i < SIZE ; i++ )

    {

        cout << "values[" << i << "] = "<< values[ i ] << endl;

    }

    //Question 2.

    cout << "\nQuestion 2 output \n\n";

    cout << "Pointer / offset notation." << endl;
    // TO DO: Add your code here
    for (int j = 0; j < SIZE; ++j) {
        cout << "vPTR[" << j << "]" << " = " << *(vPtr + j) << endl;
    }

    //Question 3

    cout << "\nQuestion 3 output \n\n";
    cout << "Pointer/offset notation where the pointer is the array name\n";
    // TO DO: Add your code here
    for (int k = 0; k < SIZE; ++k) {
        cout << "values[" << k << "]" << " = " << *(values + k) << endl;
    }

    //Question 4

    cout << "\nQuestion 4 output \n\n";

    cout << "\nPointer subscript notation\n";

    // TO DO: Add your code here
    for (int l = 0; l < SIZE; ++l) {
        cout << "values[" << l << "]" << " = " << vPtr[l] << endl;
    }


    //Question 5

    cout << "\nQuestion 5 output \n\n";

    cout << "\nAddress-of operator\n";

    // TO DO: Add your code here
    for (int m = 0; m < SIZE; ++m) {
        cout << "values[" << m << "]" << " = " << &values << endl;
    }

    return 0;

}