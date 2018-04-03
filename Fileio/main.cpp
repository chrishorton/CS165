#include <iostream>
#include <fstream>
#include <homework_two.h>

///  File I/O
///
///  Step 1: Compile and run the program without providing the physical input file "input.txt".
///
///          Q1: What message will we get?
///
///  Step 2: Use Notepad to edit a text file whose content is "111 222   333     444         555". Give the file the name
///          "input.txt" (or "Input.txt"), and compile the program. Set breakpoints on the lines which you deem appropriate.
///          Use debugger to trace the while loop of program.
///
///          Q2-1: In the 1st iteration, what data is stored in the variable token? What is displayed?
///          Q2-2: In the 2nd iteration, what data is stored in the variable token? What is displayed?
///          Q2-3: In the 3rd iteration, what data is stored in the variable token? What is displayed?
///
///  Step 3: Q3: In file open() function, what is the flag ios::in for?
///
///  Step 4: Q4-1: Change "fileName.c_str()" to "fileName". Will the program compile if the IDE is Code::Blocks?
///          what caused the problem?
///          Q4-2: Change "fileName.c_str()" to "input.txt". Will the program compile?
///          Q4-3: What is c_str() for?
///
///  Step 5: Q5-1: Change the data type of token from string to int. Will the program work?
///          Q5-2: Change the data type of token from string to C string. Will the program work?
///
///  Step 6: Could you modify the program so that it read two tokens in each iteration? For example, we want to read First Name
///          and Last Name at a time. Could you modify the program and the content of input.txt to make it work?
///
///  Step 7: Why the statement
///                              inputFile.close();
///
///          is enclosed by the if statement
///
///                              if (inputFile.good())
///
///          ? What if we move it outside of the if statement?
///
///  Step 8: Let us use the same logical file inputFile to do both input and output. First, read the input and save all
///          data in an int array arrInt. Second, use a for loop to read the data from array and output, add each number by
///          100 and output them to the inputFile.
///
///          After the work is done, open the inputFile and check the result. The content of the file should be something
///          like
///                      211 322 433 544 655
///

using namespace std;



int main()
{
    fstream inputFile;
    string fileName = "/Users/chris/CLionProjects/CS165/Fileio/text/input.txt";
    int token;

    int arrInt[999];
    int counter = 0;

    inputFile.open(fileName.c_str(), ios::in);

    if (inputFile.good())
    {
        while(!inputFile.eof())
        {
            inputFile >> token;
            arrInt[counter] = token;
            counter ++;
        }
        inputFile.close();
    }
    else
        cout << "File cannot be opened.";

    inputFile.open(fileName.c_str(), ios::out);

    for (int i = 0; i < counter-1; ++i) {
        arrInt[i] = arrInt[i] + 100;
    }

    for (int i = 0; i < counter-1; i++) {
        inputFile << arrInt[i] << endl;
        cout << arrInt[i] << endl;
    }


    return 0;
}
