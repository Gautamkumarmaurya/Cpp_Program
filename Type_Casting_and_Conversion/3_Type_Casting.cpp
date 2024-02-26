/*3.Create a Product class and convert Product type to Item type using constructor
int main()
{
  Item i1;
  Product p1;
  p1.setData(3,4);
  i1=p1;
  return 0;
} */

#include<iostream>
using namespace std;

class Product
{
private :
    int x;
    int y;
public :
    Product(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout<<"X = "<<x<<"  Y = "<<y<<endl;
    }
    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }


};

class Item
{
private :
    int i;

public :
    Item()
    {

    }
    Item(Product p)
    {
        cout<<"Item Product() Called"<<endl;
        i = p.getx() + p.gety();
    }

    void display()
    {
        cout<<"Item = "<<i<<endl;
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
