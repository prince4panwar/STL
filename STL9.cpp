/*Create an array of float type with size 5.input 5 numbers from user and store in the array.
 Print them in reverse order.*/
#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
    array <float,5> a1;
    cout<<"Enter 5 numbers :- "<<endl;
    for(int i=0;i<5;i++)
        cin>>a1[i];

    cout<<"In reverse order :- ";
    for(auto it=a1.rbegin();it!=a1.rend();it++)
        cout<<*it<<" ";

    cout<<endl;

    cout<<"In reverse order :- ";
    for(auto it=a1.end()-1;it!=a1.begin()-1;it--)
        cout<<*it<<" ";

        getch();
}
