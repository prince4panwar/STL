//1. Comment the program as directed in the comments
#include<iostream>
#include<conio.h>
#include<vector>
#include<queue>
#include<stack>
#include<list>
#include<algorithm>
using namespace std;
queue<int,list<int>>reverseQueue(queue<int,list<int>>q);
vector<int> queueToVector(queue<int,list<int>>q);
int main()
{
    //Create a queue q1 using list of int values
    queue <int, list<int>> q1;

    //push first 5 multiples of 10 in a sequence onto the queue
    for(int i=1;i<=5;i++)
        q1.push(i*10);

    //Display front and back values of the queue
    cout<<"Front element of the queue is "<<q1.front()<<endl;
    cout<<"Back element of the queue is "<<q1.back()<<endl;

    //Remove front element of the queue
    q1.pop();

    //Display front and back values of the queue
    cout<<"Front element of the queue is "<<q1.front()<<endl;
    cout<<"Back element of the queue is "<<q1.back()<<endl;

    //Reverse queue elements
    q1=reverseQueue(q1);

    //Display front and back values of the queue
    cout<<"Front element of the queue is "<<q1.front()<<endl;
    cout<<"Back element of the queue is "<<q1.back()<<endl;

    //Copy queue data into a vector
    vector <int> v=queueToVector(q1);

    //Display vector values
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    //Display front and back values of the queue
    cout<<"Front element of the queue is "<<q1.front()<<endl;
    cout<<"Back element of the queue is "<<q1.back()<<endl;

    getch();
}
queue <int,list <int>> reverseQueue(queue <int,list <int>> q)
{
    int j=q.size();
    stack <int,vector<int>> temp;
    for(int i=1;i<j;i++)
    {
       temp.push(q.front());
       q.pop();
    }
    for(int i=1;i<j;i++)
    {
       q.push(temp.top());
       temp.pop();
    }
    return q;
}
vector<int> queueToVector(queue<int,list<int>>q)
{
    vector <int> v;
    int j=q.size();
    for(int i=0;i<j;i++)
    {
        v.push_back(q.front());
        q.pop();
    }
    for(int i=0;i<j/2;i++)
    {
        for(int i=0;i<j/2;i++)
        swap(v[j-1-i],v[i]);
    }
    return v;
}
