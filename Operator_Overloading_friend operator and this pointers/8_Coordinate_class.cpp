 /*
   Create a Coordinate class for 3 variables x,y and z and overload comma operator such
  that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are
  objects of 3D coordinate class.

 */
 
 
 #include<iostream>
 using namespace std;

 class Coordinate
 {
    private :
    int a, b, c;
    public :

    Coordinate()
    {

    }

    Coordinate(int a, int b ,int c) : a(a), b(b) ,c(c)
    {

    }

     Coordinate operator,(Coordinate d)
    {
       Coordinate temp;
       temp.a =  d.a;
       temp.b =  d.b;
       temp.c =  d.c;
       return temp;
    }
    
    void display()
    {
        cout<<" A : "<<a<<endl;
        cout<<" B : "<<b<<endl;
        cout<<" C : "<<c<<endl;
    }
 };
 int main()
 {
    Coordinate c1(1, 3, 5);
    Coordinate c2(2, 4, 6);
    Coordinate c3;

    c3=(c1,c2);
    c3.display();

    cout<<endl;
    Coordinate c4(10 ,15, 20);

    c3 = (c2 ,c1 ,c4);
    c3.display();
    return 0;

 }
