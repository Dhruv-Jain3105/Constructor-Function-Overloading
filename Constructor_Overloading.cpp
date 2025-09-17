/*
Name : Dhruv Jain
PRN : 24070123042
Batch : A2
*/
#include <iostream>
using namespace std;
class Student{
    int roll_no;
    string name;
    char div;
    public:
    Student(int r=0,string n="xyz",char d='X'){      // default constuctor and parameterized constructor
        roll_no=r;
        name=n;
        div=d;
    }
    Student(Student &s1){           // copy constructor
        roll_no=s1.roll_no;
        name=s1.name;
        div=s1.div;
    }
    void display(){
        cout << "Student Name: " << name << endl;
        cout << "Student Roll No. : " << roll_no << endl;
        cout << "Student Division : " << div << endl;
    }
};
int main(){
    //Syntax for Student Class Constuctor:- roll_no.,Name,Div
    int roll;string s;char c;
    Student s1;
    Student s2(42);
    Student s3(42,"Dhruv");
    Student s4(42,"Dhruv",'A');
    cout << "Type roll_no., Name, Div : ";
    cin >> roll >> s >> c;
    Student s5(roll,s,c);
    cout << "Default Constructor :" << endl;
    s1.display();
    cout << endl;
    cout << "s2.display() :"<<endl;
    s2.display();
    cout << endl;
    cout << "s3.display :" << endl;
    s3.display();
    cout << endl;
    cout << "User input displayed : " << endl;
    s5.display();
}
/* 
Output:
Type roll_no., Name, Div : 42 Dhruv A
Default Constructor :
Student Name: xyz
Student Roll No. : 0
Student Division : X

s2.display() :
Student Name: xyz
Student Roll No. : 42
Student Division : X

s3.display :
Student Name: Dhruv
Student Roll No. : 42
Student Division : X

User input displayed :
Student Name: Dhruv
Student Roll No. : 42
Student Division : A
*/
