// Define a class Rectangle and overload area function for different types of data type.

#include<iostream>
using namespace std;

class Rectangle
{
    public :

       int area (int l , int b)
       {
        return l*b;
       }

        float area (float l, float b )
        {
            return l*b;
        }

        double area  (double l, double b)
        {
            return l*b;
        }
};
int main()
{
    Rectangle r1, r2,r3;
    cout<<"Area of Rectange in Int data type    :: "<<r1.area(2,3)<<endl;
    cout<<"Area of Rectange in Float data type  :: "<<r2.area(6,3)<<endl;
    cout<<"Area of Rectange in Double data type :: "<<r3.area(8,3)<<endl;
    return 0;
}