#include <iostream>
using namespace std;
class Student
{
private:
    char grade;
    void calcGrade(int marks)
    {
        if (marks <= 40)
            grade = 'F';
        else if (marks <= 50)
            grade = 'E';
        else if (marks <= 60)
            grade = 'D';
        else if (marks <= 70)
            grade = 'C';
        else if (marks <= 85)
            grade = 'B';
        else
            grade = 'A';
    }

public:
    void showGrade(int marks)
    {
        calcGrade(marks);
        cout << "Your grade is: " << grade;
    }
};

int main()
{
    int marks;
    Student stu;
    cout << "Please enter your marks: ";
    cin >> marks;
    stu.showGrade(marks);
    return 0;
}