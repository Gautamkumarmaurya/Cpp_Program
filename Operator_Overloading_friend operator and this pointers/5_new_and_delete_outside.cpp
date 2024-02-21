/*5. Create a student class and overload new and delete operators outside the class.*/

#include<iostream>
using namespace std;

class student
{
private :
    string name;
    int age;
public :


    student(string name ,int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout<<"\nName "<<name<<endl;
        cout<<"Age "<<age<<endl;
    }

    void * operator new(size_t size);


    void operator delete(void *p);



};
     void* student::operator new(size_t size)
    {
        cout<<"Overloading New operator with size : "<<size<<endl;
        void *p = malloc(size);
        return p;
    }

    void student:: operator delete(void *p)
    {
        cout<<"Overloading delete operator "<<endl;
        free(p);
    }


int main()
{
    student *p = new student ("Gautam",19);

    p->display();
    return 0;
}
