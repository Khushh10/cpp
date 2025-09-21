#include <iostream>
using namespace std;

class Employee {
public:
    int eId, eSalary;
    string eName;

    void get(int id) {
        eId = id;
        cout << "Enter Name of Employee: ";
        cin >> eName;
        cout << "Enter Salary: ";
        cin >> eSalary;
    }

    void display() {
        cout << "\nID: " << eId << " Name: " << eName << " Salary: " << eSalary;
    }
};

int main() {
    int a;
    cout << "Enter the number of employees: ";
    cin >> a;

    Employee *emp = new Employee[a]; 

    for (int i = 0; i < a; i++) {
        emp[i].get(i + 1); 
    }

    for (int i = 0; i < a; i++) {
        emp[i].display();
    }

    return 0;
}
