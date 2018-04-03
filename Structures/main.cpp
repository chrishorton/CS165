#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int ID;
    string Name;
    string Course;
    float Credit;
    int Score;
    int NumOfClasses;
    float GPA;
};

float calculate_gpa(float grade[], int num_of_classes){
//    4 = A, 3 = B, 2 = C, 1 = D, 0 = F
    float temp=0.;
    for (int i = 0; i < num_of_classes; ++i) {
        temp = grade[i] + temp;
    }
    return temp/num_of_classes;
}

int main() {
    fstream inputFile;
    string fileName = "/Users/chris/CLionProjects/CS165/Structures/StudentRecords.txt";

    int id, score;
    float credit;
    string name, course;

    inputFile.open(fileName.c_str(), ios::in);

    Student students[999];
    int counter = 0;
    int amountOfStudents = 0;

    if (inputFile.is_open()) {
        while(!inputFile.eof()) {

            inputFile >> id >> name >> course >> credit >> score;

            Student student = {id,name,course,credit,score};

//            cout << student.ID << " " << student.Name << " "<< student.Course << " " << student.Credit << " "<< student.Score << endl;

            students[counter] = student;

            float amy[3];
            int amy_num_classes;
            float bill[3];
            int bill_num_classes;
            float jim[3];
            int jim_num_classes;
            float henry[3];
            int henry_num_classes;
            float peter[3];
            int peter_num_classes;

            if (student.Name.compare("Amy") == 0) {
                amy[amy_num_classes] = student.Credit;
                amy_num_classes++;
                student.NumOfClasses = amy_num_classes;
                student.GPA = calculate_gpa(amy, student.NumOfClasses);

            } else if (student.Name.compare("Bill")==0) {
                bill[bill_num_classes] = student.Credit;
                bill_num_classes++;
                student.NumOfClasses = bill_num_classes;
                student.GPA = calculate_gpa(bill, student.NumOfClasses);

            } else if (student.Name.compare("Jim")==0) {
                jim[jim_num_classes] = student.Credit;
                jim_num_classes++;
                student.NumOfClasses = jim_num_classes;
                student.GPA = calculate_gpa(jim, student.NumOfClasses);

            } else if (student.Name.compare("Henry")==0) {
                henry[henry_num_classes] = student.Credit;
                henry_num_classes++;
                student.NumOfClasses = henry_num_classes;
                student.GPA = calculate_gpa(henry, student.NumOfClasses);

            } else if (student.Name.compare("Peter")==0) {
                peter[peter_num_classes] = student.Credit;
                peter_num_classes++;
                student.NumOfClasses = peter_num_classes;
                student.GPA = calculate_gpa(peter, student.NumOfClasses);
            }


            cout << "After the " << student.NumOfClasses << " class, " << student.Name << "'s GPA is: " << student.GPA << endl;


            counter ++;
            amountOfStudents ++;
        }

        inputFile.close();


    }
    else {
        cout << "File cannot be opened.";
    }

    return 0;
}