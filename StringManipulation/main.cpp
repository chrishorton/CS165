#include <iostream>

using namespace std;

int myStrLen(char *charArray){
    int i = 0;
    while (charArray && charArray[i]) {
        i++;
    }
    return i;
}

void myStrCpy(char str[], char str2[]){
    for (int i = 0; i < myStrLen(str); ++i) {
        str2[i] = str[i];
    }
    cout << "String 1: " << str << endl;
    cout << "String 2: " << str2 << endl;
}

char * myStrCat(const char * string1, const char * string2) {
    int l1 = 0, l2 = 0;
    const char * f = string1, * l = string2;

    // playing with pointer arithmetic here to get length
    while (*f++) ++l1;
    while (*l++) ++l2;

    char *result = new char[l1 + l2];

    // then concatenate
    for (int i = 0; i < l1; i++) result[i] = string1[i];
    for (int i = l1; i < l1 + l2; i++) result[i] = string2[i - l1];

    // finally, "cap" result with terminating null char
    result[l1+l2] = '\0';
    cout << result;
    return result;
}

char * myStrCat_BC(char * string1, char * string2, int size){

    if (myStrLen(string1)+myStrLen(string2) > size) {
        cout << "Out of bounds";
    } else {
        int l1 = 0, l2 = 0;
        const char * f = string1, * l = string2;

        // playing with pointer arithmetic here to get length
        while (*f++) ++l1;
        while (*l++) ++l2;

        char *result = new char[l1 + l2];

        // then concatenate
        for (int i = 0; i < l1; i++) result[i] = string1[i];
        for (int i = l1; i < l1 + l2; i++) result[i] = string2[i - l1];

        // finally, "cap" result with terminating null char
        result[l1+l2] = '\0';

        cout << "Result: " << result << endl;

        return result;
    }

}

bool isPalindromic(char *str){
    int len = myStrLen(str);
    for (int i = 0; i < len/2; i++) {
        if (tolower(str[i])!= tolower(str[len-1])) {
            cout << str << " is not a palindrome" << endl;
            return false;
        } else {
            cout << str << " is a palindrome" << endl;
            return true;
        }
    }
}

int main() {
    const int SIZE = 11;
    char s1[SIZE] = "Hello ";
    char s2[SIZE] = "World";


    cout << "Doing my concatenation" << endl;
    myStrCat(s1,s2);

    cout << "\n";

    cout << "Doing my concatenation with bounds checking" << endl;
    myStrCat_BC(s1, s2, SIZE);
    cout << "Generate out of bounds" << endl;
    myStrCat_BC(s1,s2,5);

    cout << "\n";

    cout << "Doing my strCopy" << endl;
    myStrCpy(s1,s2);

    cout << "Is palindromic" << endl;
    isPalindromic("radar");
    isPalindromic("eye");
    isPalindromic("yes");

    return 0;
}




