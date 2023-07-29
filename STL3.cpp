//Define a function to template to sort an array of any type
#include<iostream>
#include<conio.h>
using namespace std;
template <class X>
void sorting(X a[],int size)
{
    X t;
    int r,i;
    for(r=0;r<size;r++)
    {
        for(i=r+1;i<size;i++)
        {
            if(a[r]>a[i])
            {
               t=a[r];
               a[r]=a[i];
               a[i]=t;
            }
        }

    }
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";

}
int main()
{
    int b[5];
    cout<<"Enter 5 numbers :- "<<endl;
    for(int i=0;i<5;i++)
        cin>>b[i];
    sorting(b,5);
    getch();
}
