//Create an array of Complex type with size 3.Print the sum of all Complex number.
#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"Real = "<<a<<" Imaginary = "<<b<<endl;
    }
    Complex operator +(Complex C)
    {
        Complex temp;
        temp.a=C.a+a;
        temp.b=C.b+b;
        return temp;
    }
};
int main()
{
    array <Complex,3> A;
    Complex C;
    A[0].set_data(1,2);
    A[1].set_data(3,4);
    A[2].set_data(5,6);
    for(int i=0;i<3;i++)
        A[i].show_data();
    C=A[0]+A[1]+A[2];
    cout<<"Sum of three Complex is ";
    C.show_data();
    getch();
}
