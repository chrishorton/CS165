#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Person {
private:
    string name = "";
    vector <Person *> children;

    void addChildren() {
        /// Add your code here
        fstream inputFile;
        string fileName = "/Users/chris/CLionProjects/CS165/family_tree/noah_family.txt";
        string fatherName, childName;

        inputFile.open(fileName.c_str(), ios::in);

        if (inputFile.good()) {
            while (!inputFile.eof()) {
                inputFile >> fatherName >> childName;
                if (fatherName == name) {
                    Person* child = new Person(childName);
                    children.push_back(child);
                }
            }
        }
    }

public:
    Person(){};

    Person(string n) {
        name = n;
        addChildren();
    }

    ~Person()
    {
        for (int i = 0; i < children.size(); ++i) {
            if(children[i]!= nullptr)
                delete children[i];
        }
    }

    void displayAll(){
        cout << "Father: " << name << endl << "Children: ";
        for (int i = 0; i < children.size(); ++i) {
            cout << children[i]->name << " ";
        }
    }
};

int main() {
    Person Noah("Noah");
    Noah.displayAll();
    return 0;
}



