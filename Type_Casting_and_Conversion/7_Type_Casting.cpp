/*
Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
 int main()
{
  Time t1(2,30);
  t1.display();
  Minute m1;
  m1.display();
  m1=t1 // Fetch minute from time
  t1.display();
  m1.display();
  return 0;
}

*/

#include<iostream>
using namespace std;

class Time
{
private :
     
public :
      int x,y;

    Time(){}

    Time(int a, int b)
    {
        x = a;
        y = b;
    }

    void getdata()
    {
        cout<<"Enter the Hours ";
        cin>>x;
        cout<<"Enter the Minutes : ";
        cin>>y;
    }

    void display()
    {
        cout<<"Hour: "<<x<<"   Minute: "<<y<<endl;
    }



};

class Minute
{
private :
      int m;
public :
    Minute(){}

    Minute(Time n)
    {
        m = n.y;
    }

    void display()
    {
      cout<<"Minutes : "<<m<<endl; 
    }

};
int main()
{
    Time t1;
    t1.getdata();
    t1.display();

    Minute m1;

    m1 = t1;
    cout<<endl;
    t1.display();
    cout<<endl;
    m1.display();

    return 0;
}
