#include <iostream>

using namespace std;

class myClass {
    public:
    int ID = 0;
    string str1 = "This is a string";
};

int main() {

    myClass mc;

    cout << mc.ID << endl;
    cout << mc.str1 << endl;
}