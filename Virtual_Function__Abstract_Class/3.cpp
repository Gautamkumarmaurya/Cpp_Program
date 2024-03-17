/*
Using the concept of pointers, write a function that swaps the private data values of two
objects of the same class type.
*/

#include<iostream>
using namespace std;

class Swap
{
    protected :
       int  num1;

        public :

        Swap(int n)
        {
            num1 = n;
        }

        void swap(Swap *n2)
        {
            int temp;
            temp = num1;
            num1 = n2->num1;
            n2->num1 = temp;
        }

        void show()
        {
            cout<<"\n Value "<<num1;
        }
};
int main()
{
    Swap s(5);
    Swap s1(6); 
    cout<<"\n Before Swapping Value ";
    s.show();
    s1.show();
    cout<<"\n After swapping Value ";
    s.swap(&s1);
    s.show();
    s1.show();
    return 0;
}