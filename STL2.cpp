//Define a function to print values of an array of any type
#include<iostream>
#include<conio.h>
using namespace std;
template <class X>
void print(X a[],int size)
{
    cout<<"Values in array :- ";
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
}
int main()
{
    float b[5];
    cout<<"Enter 5 number :- "<<endl;
    for(int i=0;i<5;i++)
    cin>>b[i];
    print(b,5);
    getch();
}
