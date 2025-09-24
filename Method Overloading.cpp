// Name: Dhruv Jain
// PRN: 24070123042
// Batch: EnTC A2

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    // Show only name
    void showDetails(string name) {
        cout << "Student Name: " << name << endl;
    }

    // Show name and age
    void showDetails(string name, int age) {
        cout << "Student Name: " << name << ", Age: " << age << endl;
    }

    // Show name, age, and grade
    void showDetails(string name, int age, char grade) {
        cout << "Student Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }

    // Show roll number only
    void showDetails(int rollNo) {
        cout << "Student Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;

    s.showDetails("Aman");                   // Only name
    s.showDetails("Riya", 20);               // Name + Age
    s.showDetails("Karan", 21, 'A');         // Name + Age + Grade
    s.showDetails(2407);                     // Roll number

    return 0;
}

/*
OUTPUT ::

Student Name: Aman
Student Name: Riya, Age: 20
Student Name: Karan, Age: 21, Grade: A
Student Roll No: 2407
*/
