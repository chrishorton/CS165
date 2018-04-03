#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    string filename = "/Users/chris/CLionProjects/CS165/Fileio_homework/input.txt";
    fstream inputFile;
    int token1, token2;
    float count, sum;
    int absDiff = 0;
    float avg;
    string space = "       ";
    inputFile.open(filename.c_str(), ios::in);
    cout << "#1" << space << "#2" << space << "Abs diff" << "\n" << endl;

    if(inputFile.good()) {
        while(!inputFile.eof())
        {
            inputFile >> token1 >> token2;
            absDiff = abs(token1-token2);
            cout << token1 << space << token2 << space << absDiff << "\n" << endl;
            sum += absDiff;
            count ++;
        }


        cout << "\n" << "Count of abs diff: " << count << endl;
        cout << "Sum of abs diff: " << sum << endl;
        avg = sum/count;

        cout << "Average: " << avg << endl;
        setw(40);
        inputFile.close();
    }

}