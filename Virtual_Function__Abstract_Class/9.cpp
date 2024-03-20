/*
Create a base class called volume. Use this class to store two double type values that
could be used to compute the volume of figures. Derive two specific classes called cube and
sphere from the base shape. Add to the base class, a member function get_data() to initialise
base class data members and another member function display_volume() to compute and

display the volume of figures. Make display_volume() as a virtual function and redefine this
function in the derived classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube or a
sphere interactively, and display the volume.
*/

#include<iostream>
using namespace std;

class Volume
{
    protected :
       
       double a,r;

     public : 
        
        void getData(double a)
        {
            this->a = a;
        }

        virtual void display_volume() = 0;
            
};

class sphere : public Volume
{
     public :

        void display_volume()
        {
            double volume = 4/3*3.14*r*r;
            cout<<"Sphere of Volume : "<<volume<<endl;
        }
}; 

class cube : public Volume
{
     public :
        void display_volume()
        {
            double volume = a*a*a;
            cout<<"Cube of Volume : "<<volume<<endl;
        }
};

int main()
{
    cube c;
    c.getData(5);
    c.display_volume();

    sphere s;
    s.getData(4);
    s.display_volume();  

    return 0;
}