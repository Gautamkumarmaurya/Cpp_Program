// Define a class Addition that can add 2 or 3 numbers of different data types using function overloading.


#include<iostream>
using namespace std;

   void add(int a ,int b )
{
    cout<<" Addition Number " << (a+b)<<endl;
}

   void add1(float a ,float b )
{
    cout<<" Addition Number " << (a+b)<<endl;
}

   void add1(double a ,double b )
{
    cout<<" Addition Number " << (a+b)<<endl;
}
int main()
{                 // function overloading 
    add(2,3);
    add1(2.5,3.0);
     add1(2.8,3.5);

    
    return 0;
}



