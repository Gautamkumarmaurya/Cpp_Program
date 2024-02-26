/*
4. Create Product class and convert Product type to Item type using casting operator
 int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}

*/


#include<iostream>
using namespace std;

class Item
{
private :
    int i;

public :
    Item()
    {

    }

    Item(int x)
    {
        i = x;
    }
    void display()
    {
        cout<<"Item : "<<i<<endl;
    }
};

class Product
{
private :
    int x;
    int y;
public :
    Product()
    {

    }

    Product(int a, int b)
    {
        x = a;
        y = b;
    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }

    operator Item()
    {
        Item i(x+y);
        return i;
    }

    void display()
    {
        cout<<"X : "<<x<<"  Y : "<<y<<endl;
    }
};
int main()
{
    Product p(3,4);
    Item i = p;
    p.display();
    i.display();
    return 0;
}
       