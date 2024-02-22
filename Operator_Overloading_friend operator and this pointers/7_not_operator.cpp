// Create an Integer class and overload not operator for that class.


#include<iostream>
using namespace std;

class Integer
{
  private :
  int n;
  public :

    Integer()
    {

    }

    Integer(int n)
    {
        this->n = n;
    }

     Integer operator!()
    {
        return -n;
    }

    void display()
    {
      cout<<n<<endl;
    }

};
int main()
{
     
    int x;
    cout<<"Enter the one number ";
    cin>>x;
    Integer i(!x);
    i.display();
     
    return 0;
}
