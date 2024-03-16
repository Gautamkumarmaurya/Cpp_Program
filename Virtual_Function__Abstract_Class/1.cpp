/*
Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called triangle
and rectangle from the base shape. Add to the base class, a member function set_data()
to initialise base class data members and another member function display_area() to
compute and display the area of figures. Make display_area() as a virtual function and
redefine this function in the derived classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a triangle or
a rectangle interactively, and display the area.

Remember the two values given as input will be treated as lengths of two sides in the
case of rectangles, and as base and height in the case of the triangles, and used as
follows:
Area of rectangle = x * y Area of triangle = 1/2 * x * y

*/

#include<iostream>
using namespace std;

class shape
{
    protected :
       double l1,l2;
    public : 

     void setadata(double x, double y)
     {
         l1 = x;
         l2 = y;  
     }

     virtual void display_area() = 0;
     

};
class Triangle : public shape
{
    public :
     
     void display_area()
     {
        double area = 0.5*l1*l2;
        cout<<"Area of Triangle "<<area<<endl;
     }

};
class rectangle : public shape
{
    public :

         void display_area()
         {
            double area = l1*l2;
            cout<<"Area of Rectangle "<<area<<endl;
         }

};
int main()
{
    rectangle s;
    s.setadata(4,5);
    s.display_area();

    Triangle t;
    t.setadata(5,6);
    t.display_area();


    return 0;

}