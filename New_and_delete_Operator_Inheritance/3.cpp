/*3.Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.  */


 #include<iostream>
using namespace std;

class base
{
protected :
    float math;
    float hindi;
    float english;
    public :

        void accept()
        {
            cout<<"Enter the Math Marks : "<<endl;
            cin>>math;
            cout<<endl;
            cout<<"Enter the Hindi marks : "<<endl;
            cin>>hindi;
            cout<<endl;
            cout<<"Enter the English Marks : "<<endl;
            cin>>english;
            cout<<endl;
        }
};

class derived : public base
{
    protected :
    float total_marks;

public :
    void totalmark()
    {
        total_marks = math+hindi+english;
    }
};

class  student : public derived
{

    float percentage;

    public:

    void calculate()
    {
        percentage =  (total_marks/300.0)*100.0;
    }

    void display()
    {
        cout<<"Total Percantage : " <<percentage<<endl;
    }

};
int main()
{
    student d;
    d.accept();
    d.totalmark();
    d.calculate();
    d.display();
    return 0;
}
