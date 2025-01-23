#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string name;
    double salary;
    int age;
    string qualification;
    int yearsOfWorking;

public:
    // Method to set teacher details
    void setDetails(string teacherName, double teacherSalary, int teacherAge, string teacherQualification, int teacherYearsOfWorking) {
        name = teacherName;
        salary = teacherSalary;
        age = teacherAge;
        qualification = teacherQualification;
        yearsOfWorking = teacherYearsOfWorking;
    }

    // Method to display teacher details
    void displayDetails() {
        cout << "Teacher Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Age: " << age << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Years of Working: " << yearsOfWorking << endl;
    }
};

int main() {
    Teacher teacher1;

    string name;
    double salary;
    int age;
    string qualification;
    int yearsOfWorking;

    // Input teacher details
    cout << "Enter the name of the teacher: ";
    getline(cin, name);
    cout << "Enter the salary of the teacher: ";
    cin >> salary;
    cout << "Enter the age of the teacher: ";
    cin >> age;
    cin.ignore(); // To consume the newline character left by cin
    cout << "Enter the qualification of the teacher: ";
    getline(cin, qualification);
    cout << "Enter the years of working of the teacher: ";
    cin >> yearsOfWorking;

    // Set and display teacher details
    teacher1.setDetails(name, salary, age, qualification, yearsOfWorking);
    teacher1.displayDetails();

    return 0;
}