/*
Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()

{
  Rupee r = 23;
  Dollar d = r; // Rupee to Dollar conversion
  d.display();
  r.display();
  r = d; // Dollar to Rupee Conversion
  d.display();
  r.display();
  return 0;
}

*/

#include<iostream>
using namespace std;

class Rupee
{

  public :
     int r;

    Rupee() {}
 
    Rupee(int n)
    {
       r = n;
    }

     

    void display()
    {
        cout<<"Rupee :: "<<r<<endl;
    }
};

class Dollar
{
  
     
 public :
  int x;

    Dollar() {}

    Dollar(Rupee m)
    {
       x = m.r;
    }

    void display()
    {
       cout<<"Dollar :: "<<x<<endl;
    }
};

int main()
{
    Rupee r = 23;
    Dollar d = r;   // Rupee to Dollar conversion
    d.display();
    r.display();
    d = r;          // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
