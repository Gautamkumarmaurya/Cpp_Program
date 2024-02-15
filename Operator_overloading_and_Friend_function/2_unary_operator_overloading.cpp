//   Write a C++ program to overload unary operators that is increment and decrement.


#include<iostream>
using namespace std;

class Num
{
 private :
     int x;
 public :
    void getNum(int a)
    {
        x = a;
    }
    void print()
    {
        cout<<"Value of x is ::"<<x<<endl;
    }
    void operator++(void)
    {
        x = ++x;
    }
    void operator++(int)
    {
        x = x++;
    }
     void operator--(void)
    {
        x = --x;
    }
    void operator--(int)
    {
        x = x--;
    }

};
int main()
{
    Num n;
    n.getNum(10);

    ++n ;
    cout<<"after Pre increment - ";//11
    n.print();
    cout<<endl;

    n++;
    cout<<"after post increment  - ";//11
    n.print();
    cout<<endl;

    --n;
    cout<<"after pre Decrement  - ";//10
    n.print();
    cout<<endl;

    n--;
    cout<<"after Post Decrement - ";//10
    n.print();
    cout<<endl;

    return 0;
}
