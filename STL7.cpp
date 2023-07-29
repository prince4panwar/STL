/*Create an array of int type with size 10.input numbers from user and store in the array.
Print only odd numbers stored in the array from left to right.*/
#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
    array <int,5> a2;
    array <int,5> a1;
    cout<<"Enter 5 numbers :- "<<endl;
    for(auto it=a2.begin();it!=a2.end();it++)
        cin>>*it;
    cout<<"Enter 5 numbers :- "<<endl;
    for(int i=0;i<5;i++)
      cin>>a1[i];


        cout<<"Odd numbers :- ";
    for(int num:a2)
    {
        if(num%2!=0)
            cout<<num<<" ";
    }

     cout<<endl<<"Odd numbers :- ";
    for(int num:a1)
    {
        if(num%2!=0)
            cout<<num<<" ";
    }
   getch();
}
