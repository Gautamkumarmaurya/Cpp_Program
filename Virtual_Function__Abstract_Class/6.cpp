/*
Extend above to display the area of circles. For a circle,only one value is needed i.e.
radius but in get_data() function 2 values are passed.
*/

#include<iostream>
using namespace std;

class Area
{
     float r;
     float r1, area;
     public :
           Area(){}

            Area(float r , float r1=0)
            {
               this->r = r;
                this->r1 = r1;
            }

            void setData()
            {
                 area = 3.14*r*r;
            }

            void show()
            {
                cout<<"Area of Circle "<<area<<endl;
            }
};
int main()
{
    Area a(5);
    a.setData();
    a.show();

    return 0;
}