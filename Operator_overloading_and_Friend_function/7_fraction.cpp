/*
     Define a C++ class fraction

class fraction
  {
   long numerator;
    long denominator;
    Public:
  fraction (long n=0, long d=0);
  };

    Overload the following operators as member or friend:
   a) Unary ++ (pre and post both)
   b) Overload as friend functions: operators << and >>.


*/



#include<iostream>
using namespace std;

class Fraction
{
private :
    long num,deno;
public :
    Fraction(long int n=0 ,long int d=0)
    {
        num = n;
        deno = d;
    }
    friend void operator>>(istream &in ,Fraction &f)
    {
        cout<<"\nNumerator     : ";
        in>>f.num;

        cout<<"\nDenominator   : ";
        in>>f.deno;
        cout<<"\n";
    }
    friend void operator <<(ostream &out ,Fraction &f)
    {
        out<<f.num<<"/"<<f.deno;
    }
    Fraction operator++()
    {
        ++num;
        ++deno;
        return(*this);
    }
    Fraction operator++(int s)
    {
        Fraction temp = *this;
        num++;
        deno++;
        return temp;
    }
};
int main()
{
    Fraction f1,f2;
    cout<<"\n f1  : ";
    cout<<f1;
    cout<<"\n f2  : ";
    cout<<f2;

    cout<<"\n\nEnter 1st fraction value \n ";
    cin>>f1;

    cout<<"\nf1++   : ";
    f1++;
    cout<<f1;

    cout<<"\n++f1   : ";
    ++f1;
    cout<<f1;

    cout<<"\n\nEnter 2nd fraction \n";
    cin>>f2;
    f2 = ++f1;

    cout<<"f2  = ++f1 \n";
    cout<<"f1    : ";
    cout<<f1;

    cout<<"\n";

    cout<<"f2    : ";
    cout<<f2;
    f2 = f1++;

    cout<<"\n\n";
    cout<<"f2  = f1++ \n";
    cout<<"f1    : ";
    cout<<f1;

    cout<<"\n";

    cout<<"f2    : ";
    cout<<f2;
    f2 = f1++;
    return 0;

}

 
 
