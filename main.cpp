#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string studentID, studentNAME, school, studentHeight;
    int studentAge;

    public:
    void setStudentName(string n)
    {
        studentNAME = n;
    }

    string getStudentName()
    {
        return studentNAME;
    }

    void setStudentHeight(int h)
    {
        studentHeight = h;
    }

    string getStudentHeight()
    {
        return studentHeight;
    }

    void setStudentAge(int a)
    {
        studentAge = a;
    }

    int getStudentAge()
    {
        return studentAge;
    }

    void setId(string id) 
    {
        studentID = id;
    }

    string getId()
    {
        return studentID;
    }

    void setSchool(string s)
    {
        school = s;
    }

    string getSchool()
    {
        return school;
    }
};

int main()
{
    string info[5] = {"Name : ", "Height(inch) : ", "Age : ", "School : ", "ID : "};

    system("cls");

    Student student_info[5];

    int size = sizeof(student_info) / sizeof(student_info[0]);

    for (int i = 0; i < size; i++)
    {
        string n;

        for (int j = 0; j < 1; j++)
        {
            cout << info[i];
        }

        getline(cin, n);

        student_info[i].setStudentName(n);

        cout << endl;
    }

    system("cls");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << info[i];
        }

        cout << student_info[i].getStudentName() << endl;;
    }

    system("pause");
    return 0;
}