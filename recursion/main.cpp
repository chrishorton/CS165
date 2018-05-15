#include <iostream>
using namespace std;

void reverse(const string &t){
    size_t numberChars = t.size();

    if (numberChars == 1) {
        cout << t << endl;
    } else {
        cout << t[numberChars-1];
        string str = t.substr(0, numberChars-1);
        reverse(str);
    }

}

const int SIZE = 9;
int arrInt[SIZE]={1,2,3,4,5,6,7,8,9};

void ReverseArray(int n[], int size) {
    int start = 0, end = size - 1, temp;
    if (start < end) {
        temp = n[start];
        n[start] = n[end];
        n[end] = temp;
        ReverseArray(n + 1, size - 2);
    }
}

int mySum(int n[], int size){
    if (size==0){
        return 0;
    } else if (size==1){
        return n[0];
    } else {
        return mySum(n,size-1) + n[size-1];
    }
}

int mySumFor(int n[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += n[i];
    }
    return sum;
}

int binaryRecursion(int n[], int size) {
    if (size == 0) {
        return 0;
    } else if (size == 1) {
        return n[0];
    } else {
        int m = size/2;
        return binaryRecursion(n, m) + binaryRecursion(n+m, size-m);
    }

}


int main() {
    string message = "Hello there";
    cout << "Reversing " << message << ": ";
    reverse("Hello there");
    cout << "\nReversing array result: ";
    ReverseArray(arrInt, SIZE);
// Display array
    for (int i = 0; i < SIZE; ++i) {
        cout << arrInt[i];
    }

    cout << "\n\nSum using for loop: ";

    cout << mySumFor(arrInt, SIZE) << endl;
    cout << "\nSum using linear recursion: ";

    cout << mySum(arrInt, SIZE) << endl;
    cout << "\nSum using binary recursion: ";

    cout << binaryRecursion(arrInt, SIZE) << endl;

    return 0;
}