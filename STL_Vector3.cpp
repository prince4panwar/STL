//Complete the following program as directed in the comments
#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{
    //create a vector for int type values and an iterator
    vector <int> v1;
    //vector <int> :iterator it;
    //Store element 10 using push_back method in vector v1
    v1.push_back(10);
    //Store element 20 at the beginning of the vector v1 using insert function
    v1.insert(v1.begin()+0,20);
    for(int num:v1)
        cout<<num<<" ";

    cout<<endl;
    //Store element 30 four time,just after first element of the vector v1 using insert function
    v1.insert(v1.begin()+1,30);
    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;
    //Create three int variables with values 11,12,13;now store them at 3rd position in the vector v1 using insert function
    int x=11,y=12,z=13;
    v1.insert(v1.begin()+2,{x,y,z});
    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;

    //Print values vector v1
    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;

    //Create another vector v2 for int type values
    vector <int> v2;

    //Copy last 5 element of v1 into v2(last element of v1 should be first element of v2)
    for(auto it=v1.rbegin();it!=v1.rbegin()+5;it++)
        v2.push_back(*it);

    //for(auto it=v2.rbegin();it!=v2.rend()-1;it++)

    //Print v2 vector elements
    cout<<"Copy :- ";
    for(int num:v2)
        cout<<num<<" ";
    cout<<endl;

    //Erase second element of vector v2
    v2.erase(v2.begin()+1);

    //Print v2 vector element
    for(int num:v2)
        cout<<num<<" ";
    cout<<endl;

    //Erase 4th,5th and 6th element of vector v1
    v1.erase(v1.begin()+2);
    v1.erase(v1.begin()+2);
    v1.erase(v1.begin()+2);
    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;
     getch();
}
