// Goal: Learn how to use class and the two types of call-by-references.
// Step 0: Prepare a text file Integers.txt, which should contain many integers.
// Step 1: Implement the member function swap() for myUtil class. After calling the
// function, the two arguments in the caller function should be swapped.
// Step 2: Learn how the member function passByRef1() work.
// Step 3: Implement the member function passByRef2() for myUtil class. After calling the
// function, the argument in the caller function should have the value of the sum of all
// integers in the file Integers.txt.
// Question: Can we get the same type of works done without using a class? Yes.

#include <iostream>
#include <fstream>

using namespace std;
class myUtil {
public:
// Enter your code here for swap() function

    void myswap(int &n1, int &n2) {
        int temp;
        temp = n1;
        n1 = n2;
        n2 = temp;
    }


    void passByRef1(int &Sum2) {
        ifstream inputFile;
        int iToken = 0;
        inputFile.open("/Users/chris/CLionProjects/CS165/passByReference/Integers.txt");
        inputFile.seekg(0);
        while (inputFile >> iToken) {
            Sum2 = Sum2 + iToken;
        }
        inputFile.close();
    }

    // Enter your code here for passByRef2()}
    void passByRef2(int *Sum2Ptr) {
        ifstream inputFile;
        int iToken = 0;
        inputFile.open("/Users/chris/CLionProjects/CS165/passByReference/Integers.txt");
        inputFile.seekg(0);
        while (inputFile >> iToken) {
            *Sum2Ptr = *Sum2Ptr + iToken;
        }
        inputFile.close();
    }
};

int main() {
        int sum = 0, n1 = 1, n2 = 2;
        myUtil mu1;
        cout << "Before -- n1: " << n1 << "; n2: " << n2 << endl;
        mu1.myswap(n1, n2);
        cout << "After  -- n1: " << n1 << "; n2: " << n2 << endl;
        mu1.passByRef1(sum);
        cout << "The sum of the integers are: " << sum << endl;
        cout << "Set sum back to 0 to test pointer" << endl;
        sum = 0;
        mu1.passByRef2(&sum);
        cout << "The sum of the integers are: " << sum << endl;
        return 0;
    }