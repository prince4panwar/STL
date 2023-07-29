#include<iostream>
#include<conio.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
stack <int,vector<int>> reverseStack(stack <int,vector <int>> s);
vector <int> stackToVector(stack <int,vector<int>> &s);
int main()
{
    //Create a stack s1 to store int type values, implemented with the help of vector
    stack <int,vector<int>>s1;

    //Push first 5 multiples of 10 in a sequence onto the Stack
    for(int i=1;i<=5;i++)
    s1.push(i*10);

    //Display top element of the stack
    cout<<s1.top()<<" ";
    cout<<endl;

    //remove the top element of the stack
    s1.pop();

    //Display top element of the stack
    cout<<s1.top()<<" ";
    cout<<endl;

    //Reverse stack elements
    s1=reverseStack(s1);

    //Display top element of the stack
    cout<<s1.top()<<" ";
    cout<<endl;

    //Copy stack data into a vector
    vector <int> v=stackToVector(s1);

    //display vector values
    cout<<"Vector :- ";
    for(auto it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    //display top value of the stack
    cout<<s1.top()<<endl;
    getch();
}


stack <int,vector<int>> reverseStack(stack <int,vector <int>> s)
{
    stack <int,vector<int>> t;
    int length=s.size();
    for(int i=1;i<=length;i++)
    {
        t.push(s.top());
        s.pop();
    }
    return t;
}
vector <int> stackToVector(stack <int,vector<int>> &s)
{
    stack<int,vector<int>>t, wow;
    vector <int> v;
    int length=s.size();
    for(int i=1;i<=length;i++)
    {
        t.push(s.top());
        s.pop();
    }
    for(int i=1;i<=length;i++)
    {
        wow.push(t.top());
        t.pop();
    }
    for(int i=1;i<=length;i++)
    {
        v.push_back(wow.top());
        wow.pop();
    }
    return v;
}


