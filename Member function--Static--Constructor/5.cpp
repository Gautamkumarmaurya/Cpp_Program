// Define a class Date and write a program to Display Date and initialise date object using Constructors.


#include<iostream>
using namespace std;

class Date
{
private:
    int day,month,year;
public:
    Date(int x,int y, int z)
    {
        day   = x;
        month = y;
        year  = z;
    }

    void display()
    {
        cout<<"The Entered date is........"<<endl;
        cout<<" Day :"<<day<<" Month :"<<month<<" year :"<<year<<endl;
    }
};
int main()
{
    Date d(2,3,2004);
     d.display();
    return 0;
}
