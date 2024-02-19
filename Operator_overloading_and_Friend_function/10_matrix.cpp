/*
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).
*/


#include<iostream>
using namespace std;

class Matrix
{
    private :

    int a[3][3];
    int b[3][3];
    int c[3][3];

    public :

        

    void  get_accept()
    {
        cout<<"Enter the First Matrix Number [3X3] : "<<endl;
        for(int i = 1; i<=3; i++)
        {
             for(int j=1; j<=3; j++)
             {
             cin>>a[i][j];
             }
        }
        cout<<endl;

        cout<<"Enter the First Matrix :: "<<endl;
        for(int i = 1; i<=3; i++)
        {
             for(int j=1; j<=3; j++)
             {
             cout<<a[i][j]<<"\t";
             }
             cout<<endl;
        }

        cout<<endl;

        cout<<"Enter the  Second Matrix Number [3X3] : "<<endl;
        for(int i = 1; i<=3; i++)
        {
             for(int j=1; j<=3; j++)
             {
             cin>>b[i][j];
             }
        }


        cout<<endl;

        cout<<"Enter the Second Matrix :: "<<endl;
        for(int i = 1; i<=3; i++)
        {
             for(int j=1; j<=3; j++)
             {
             cout<<b[i][j]<<"\t";
             }
             cout<<endl;
        }

        cout<<endl;
    }

    void matrix()
    {
        cout<<"Addition of matrix :: "<<endl;
        for(int i =1; i<=3; i++)
        {
            for(int j =1; j<=3; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
    }

    void display()
    {
        for(int i =1; i<=3; i++)
        {
            for(int j =1; j<=3; j++)
            {
                cout<<c[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

};
int main()
{
   Matrix m;
   m.get_accept();
   m.matrix();
   m.display();
   return 0;
}

