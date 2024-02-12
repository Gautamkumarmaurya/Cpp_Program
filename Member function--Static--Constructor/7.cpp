// Define a class Box and write a program to enter length, breadth and height and initialise
// objects using constructor also define member functions to calculate volume of the box.


#include<iostream>
using namespace std;

class Box
{
private:
    int length, breath,height;
    int volume;
public:
    Box(int x,int y,int z)
    {
        length = x;
        breath = y;
        height = z;
    }
    void box()
    {
        volume = length*breath*height;
    }
    void print()
    {
        cout<<"length:"<<length<<" breath:"<<breath<<" height:"<<height<<" is "<<volume<<endl;
    }
};
int main()
{
    int x,y,z;
    cout<<"Enter the Length : ";
    cin>>x;
    cout<<"Enter the Breath : ";
    cin>>y;
    cout<<"Enter the Height : ";
    cin>>z;

    Box b(x,y,z);
    b.box();
    b.print();
    return 0;
}
