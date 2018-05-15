/// This program uses the getline function to read a line of
/// data from the file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   string input;		// To hold file input
   fstream nameFile;	// File stream object

   // Open the file in input mode.
   nameFile.open("/Users/chris/CLionProjects/CS165/getline/murphy.txt", ios::in);

   if (nameFile.good())
   {
       while (!nameFile.eof())
       {
           getline(nameFile, input);
           cout << input.length() << " " << input << endl;
       }

       // Close the file.
       nameFile.close();
   }
   else
   {
      cout << "ERROR: Cannot open file.\n";
   }
   return 0;
}