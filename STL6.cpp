//Create an array of int type with size 5. print array element from left to right.
#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
    //How to create an array object?
    array <int,5> a1;
    array <int,5> a2{1,2,3,4,5};

    //How to access array element using explicit iterator(Range for loop)?
    for(auto it=a2.begin();it!=a2.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    //How to access array element using implicit iterator(Range for loop)?
    for(int num:a2)
        cout<<num<<" ";
    //
    getch();
}
