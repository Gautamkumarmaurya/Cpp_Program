/*
Create a base class called Matrix. Use this class to store 4 int type values that could be
used to calculate determinants and create matrices. Create class calculate_determinant which
will calculate the determinant of a matrix.Using these classes, calculate the determinant of the matrix.
*/

#include<iostream>
using namespace std;

class Matrix
{
    int a,b,a1,b1;
    int determinant;
    public :
         
         Matrix(int a, int b, int a1, int b1)
         {
            this->a = a;
            this->b = b;
            this->a1 = a1;
            this->b1 = b1;
         }

         void calculate_determinant()
         {
            determinant = a*b1 - b*a1;
         }

         void Display()
         {
            cout<<"The determinant of a matrix "<<determinant<<endl;
         }
};

int main()
{
    Matrix m = Matrix(5,3,4,5);
     
    m.calculate_determinant();
    m.Display();
}