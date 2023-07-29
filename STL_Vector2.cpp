/*a.  Create a vector for int type values and store any 4 numbers in it.
Print squares of vector element using range-for-loop.*/
#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    for(int num:v1)
        cout<<num*num<<" ";
    getch();

}

