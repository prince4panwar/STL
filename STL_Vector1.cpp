#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(20);

    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;

    v1.insert(v1.begin()+1,1000);
    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;

    v1.insert(v1.begin()+1,3,1000);
    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;

    v1.insert(v1.begin()+1,{45,50,60});
    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;

    v1.erase(v1.begin()+1);
    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;


    getch();
}
