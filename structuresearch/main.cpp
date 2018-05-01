#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

const int maxCoursesTaken = 99;
int stuCount = 0;

struct Course{
    string courseName = "";
    int courseScore = 0;
    int courseCredit = 0;
};

struct Student{
    int ID = 0;
    string Name = "";
    int courseCount = 0;
    Course arrCourse[maxCoursesTaken];
};

double getGPA(int grade){
    if(grade > 90){
        return 4.0;
    } else if (grade > 80 && grade < 90){
        return 3.0;
    } else if (grade > 70 && grade < 80){
        return 2.0;
    } else if (grade > 60 && grade < 70){
        return 1.0;
    } else {
        return 0.0;
    }
}

int isNameInArray(Student arrStu[], string target) {
    int i = 0;

    while (arrStu[i].Name.compare("") != 0) {
        cout << i << endl;
        if(target.compare(arrStu[i].Name) == 0){
            return i;
        }

        i++;
    }

    return -1;
}


int isInArray(Student arrStu[], int target){
    int i = 0;
    while (arrStu[i].ID != 0){
        if(target == arrStu[i].ID){
            return i;
        }
        i++;
    }

    return -1;
}


void displayAll(Student arrStu[])
{
    for (int i = 0; i < stuCount; ++i) {
        cout << "ID: " << arrStu[i].ID << "\n" << "Name: " << arrStu[i].Name << "\n" << "Amount of Courses Taken: " << arrStu[i].courseCount << endl;
        // Print courses with a tab
        for (int j = 0; j < arrStu[i].courseCount; j++) {
            cout << "\t" << arrStu[i].arrCourse[j].courseName;
            cout << "\t" << arrStu[i].arrCourse[j].courseCredit;
            cout << "\t" << arrStu[i].arrCourse[j].courseScore << endl;
        }
    }
}

void displayOne(Student arrStu[], int pos) {
    cout << "ID: " << arrStu[pos].ID << "\n" << "Name: " << arrStu[pos].Name << "\n" << "Amount of Courses Taken: " << arrStu[pos].courseCount << endl;
    // Print courses with a tab
    for (int j = 0; j < arrStu[pos].courseCount; j++) {
        cout << "\t" << arrStu[pos].arrCourse[j].courseName;
        cout << "\t" << arrStu[pos].arrCourse[j].courseCredit;
        cout << "\t" << arrStu[pos].arrCourse[j].courseScore << endl;
    }
}


int main() {
    fstream inputFile;
    string fileName = "/Users/chris/CLionProjects/CS165/structuresearch/StudentRecords.txt";
    int ID, Credit, Score;
    string Name = "";
    string CourseName = "";
    Student arrStu[maxCoursesTaken];
    char menuSelection;
    string queuedStudent = "";

    inputFile.open(fileName.c_str(), ios::in);
    if (inputFile.is_open())
    {

        while(!inputFile.eof())
        {
            inputFile >> ID >> Name >> CourseName >> Credit >> Score;
            int index = isInArray(arrStu, ID);

            if(index == -1)
            {
                Student student;
                student.ID = ID;
                student.Name = Name;
                student.arrCourse[student.courseCount].courseName = CourseName;
                student.arrCourse[student.courseCount].courseCredit = Credit;
                student.arrCourse[student.courseCount].courseScore = Score;
                student.courseCount ++;
                arrStu[stuCount] = student;
                stuCount++;
            }
            else
            {
                int count = arrStu[index].courseCount;
                arrStu[index].arrCourse[count].courseScore = Score;
                arrStu[index].arrCourse[count].courseCredit = Credit;
                arrStu[index].arrCourse[count].courseName = Name;

                arrStu[index].courseCount ++;
            }
        }

        inputFile.close();
    } else {
        cout << "File cannot be opened.";
    }

    displayAll(arrStu);

    cout << "You can enter L to pull a single student's academic profile; alternatively, you can enter A to view every student's academic profile on record. When you're done, enter Q to quit the program.";
    cin >> menuSelection;

    if(menuSelection == 'L' || menuSelection == 'l')
    {
        cout << "Type N if you will provide the name, type I to provide an ID";
        cin >> queuedStudent;
        string name;
        int target,pos, ID;
        // displayOne

        if (queuedStudent.compare("N")==0) {
            cout << "Name of Student: ";
            cin >> name;

            pos = isNameInArray(arrStu,name);
            cout << pos;
            displayOne(arrStu, pos);


        } else if (queuedStudent.compare("I")==0) {
            cout << "ID of student: ";
            cin >> ID;
            pos = isInArray(arrStu, ID);

            displayOne(arrStu, pos);
        }

    }
    else if (menuSelection == 'A' || menuSelection == 'a')
    {
        displayAll(arrStu);
    }
    else if (menuSelection == 'Q' || menuSelection == 'q')
    {
        cout << "Bye!";
        return 0;
    }
    else
    {
        cout << "Your input was invalid!";
        return 0;
    }

}
