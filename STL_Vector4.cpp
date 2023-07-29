//Compare the following program as directed in the comments
#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    //Create a vector vec for containing int vectors
    vector <int> vec;
    //create three int vector and initialize them with some values during declaration
    vector <int> v1={10,20,30},v2={11,22,33},v3={30,60,90};
    //Store vector v1 in vector vec using push_back method
    for(auto it=v1.begin();it!=v1.end();it++)
    vec.push_back(*it);
    for(int num:vec)
        cout<<num<<" ";
    cout<<endl;

    //Store vector v2 and v3 at the end of vector vec using insert function in single call
    for(auto it=v3.begin();it!=v3.end();it++)
        v2.push_back(*it);

        for(int num:v2)
        cout<<num<<" ";
    cout<<endl;

    for(auto it=v2.rbegin();it!=v2.rend();it++)
        vec.insert(vec.begin()+3,*it);
    //Print all element of vector vec in separate line
    for(int num:vec)
        cout<<num<<" ";
    cout<<endl;
    getch();
}
