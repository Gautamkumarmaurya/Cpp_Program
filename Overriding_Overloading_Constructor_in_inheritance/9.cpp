/*
Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.
*/ 


 

#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

class area
{
    float ar;
       public :

          area(float r)
          {
              ar = 3.14*r*r;
          }

          area(float l, float b)
          {
            ar = l*b;
          }

          area(float a, float b, float c)
          {
            float s;
            s = (a+b+c)/2;
            ar = s*(s-a)*(s-b)*(s-c);
            ar=pow(ar,0.5);
          }

          void display()
          {
            cout<<"\n Area  : "<<ar<<endl;
          }
};
int main()
{
  int ch;
  float x,y,z;
   while(true)
  {
    cout<<"\n 1. Area of circle ";
    cout<<"\n 2. Area of Rectangle ";
    cout<<"\n 3. Area of Tringle ";
    cout<<"\n 4. Exit ";
    
    cout<<"\n\nEnter Your choice :";
    cin>>ch;
    switch (ch)
    {
    case  1:
       {
         cout<<"\n Enter Radius of the circle ";
         cin>>x;
         area a1(x);
         a1.display();
       }
      break;

      case 2:
      {
        cout<<"\n Enter Length and Breath of the Rctangle : ";
        cin>>x>>y;
        area a2(x,y);
        a2.display();
      }
      break;

      case 3:
      {
        cout<<"\n Enter sides of the traiangle :";
        cin>>x>>y>>z;
        area a3(x,y,z);
        a3.display();
      }
      break;

      case 4:
      exit(0);
      break;
    
    default:
       cout<<"\n\n Invalid choice "<<endl;
    }
  }  

  return 0;
  
}

