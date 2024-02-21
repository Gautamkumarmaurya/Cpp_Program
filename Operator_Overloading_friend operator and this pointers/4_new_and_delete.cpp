// /*4. Create a student class and overload new and delete operators as a member function of the class. */

#include <iostream>
using namespace std;
 

class Student 
{
private:
    int rollNumber;
    string name;

public:
     
    Student(int roll, string name1)  
     {
         rollNumber = roll;
         name = name1;
     }

    // Overloaded new operator
    void* operator new(size_t size) 
    {
        cout << " new operator called" <<endl;
        void* p = ::new Student(0, "");          // Allocate memory using global new operator
        return p;
    }

    // Overloaded delete operator
    void operator delete(void* p) 
    {
        cout << "delete operator called" <<endl;
        delete p;              // Deallocate memory using global delete operator
    }

    // Getter functions
    int getRollNumber()  
    {
        return rollNumber;
    }

    string getName()  
    {
        return name;
    }
};

int main()
{
    // Creating a Student object using overloaded new operator

    Student* s = new Student(101, "gautam");

    // Accessing member variables

    cout<<"Roll Number: " << s->getRollNumber()<<endl;
    cout<<"Name: " << s->getName()<<endl;

    // Deleting the object using overloaded delete operator
    delete s;

    return 0;
}
