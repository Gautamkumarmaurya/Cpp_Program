//Create a class FLOAT that contains one float data member. Overload all the four
//arithmetic operators so that they can operate on the objects of FLOAT.


#include<iostream>
using namespace std;

class Float
{
    private :
             float x;
    public :
              void setdata(float y)
             {
                     x = y;
             }

             void disdata()
             {
                cout<<" X    : "<<x;
             }

             Float operator+(Float c)
             {
                 Float temp;
                 temp.x = x + c.x;
                 return temp;
             }

               Float operator-(Float c)
             {
                 Float temp;
                 temp.x = x - c.x;
                 return temp;
             }

               Float operator*(Float c)
             {
                 Float temp;
                 temp.x = x * c.x;
                 return temp;
             }

               Float operator/(Float c)
             {
                 Float temp;
                 temp.x = x / c.x;
                 return temp;
             }
};
int main()
{
    Float c1,c2,c3;
    c1.setdata(10);
    c2.setdata(20);
    
     cout<<endl;
     c3 = c1+c2;
     c3.disdata();

     cout<<endl;
     c3 = c1-c2;
     c3.disdata();

     cout<<endl;
     c3 = c1*c2;
     c3.disdata();

     cout<<endl;
     c3 = c1/c2;
     c3.disdata();

    return 0;
}