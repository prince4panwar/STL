/*Define a function template which takes two arguments of same types and return the greater value*/
#include<iostream>
#include<conio.h>
using namespace std;
template <class Y>
Y Greater(Y a,Y b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int a;
    cout<<Greater(2,3)<<endl;
    getch();
    cout<<Greater(2.3f,3.2f);
    getch();
}
