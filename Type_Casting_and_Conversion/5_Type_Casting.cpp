/*
 Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
 functions to support Invent1 to float and Invent1 to Invent2 type.
 Example -
  int main()
 {
    Invent1 x(4,5);
    Invent2 y;
    float z;
    z = x; // Invent1 to float
    y = x; // Invent1 to Invent2
    return 0;
 }

*/



#include<iostream>
using namespace std;

class Invent1
{

public :
    float x, y;

    Invent1(int a , int b)
    {
        x = a;
        y = b;
    }

    operator float()
    {
        return x;
    }

};

class Invent2
{
private :
    float y,z;

public :
    Invent2()
    {

    }

    Invent2(int a, int b )
    {
        y = a;
        z = b;
    }

    Invent2(Invent1 i)
    {
        y = i.x;
        z = i.y;
    }

    void display()
    {
       cout<<"y :: "<<y<<"   Z :: "<<z<<endl;
    }
};
int main()
{
    Invent1 x(4,5);
    Invent2 y;
    float z;

    z = x;     // Invent1 to float
    y = x;    // Invent1 to Invent2

    cout<<"Z :: "<<z<<endl;
    y.display();
    return 0;
}


 