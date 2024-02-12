// Define a class student and write a program to enter student details using constructor anddefine 
// member function to display all the details.


#include<iostream>
using namespace std;

class Student
{
private:
    int mark;
    char grade;
public:
    Student(int x, char y)
    {
        mark = x;
        grade = y;
    }
    void display()
    {
        cout<<"Student details........"<<endl;
        cout<<"Mark :"<<mark<<"\nGrade :"<<grade<<endl;
    }
};
int main()
{
    Student s(78,'B');
    Student s1(95,'A');
    s.display();
    s1.display();
    return 0;
}
