//Complete the program as directed in the comments
#include<conio.h>
#include<vector>
#include<deque>
#include<iostream>
#include<algorithm>
using namespace std;
void reverseDeque(deque<int>&d);
void ReverseDeque(deque<int> &d);
vector<int> dequeToVector(deque<int> d);
int main()
{
 //create a deque d1 to contain int type values
 deque <int> d1;

 //Push first 5 multiples of 10 in a sequence onto the deque
 for(int i=1;i<=5;i++)
    d1.push_back(i*10);

 //display all the elements of deque
 for(auto it=d1.begin();it!=d1.end();it++)
    cout<<*it<<" ";
 cout<<endl;

 //remove the front elements of deque
 d1.pop_front();

 //display all the element of deque
 for(auto it=d1.begin();it!=d1.end();it++)
    cout<<*it<<" ";
 cout<<endl;

 //insert an element 60 at end of the deque
 d1.push_back(60);

 //display all the element of deque
 for(auto it=d1.begin();it!=d1.end();it++)
    cout<<*it<<" ";
 cout<<endl;

 //insert en element 35 after 30
 deque <int>::iterator it;
 d1.insert(it=d1.begin()+2,35);

 //display all the element of deque
 for(auto it=d1.begin();it!=d1.end();it++)
    cout<<*it<<" ";
 cout<<endl;

 //Reverse deque elements by using method 1
 reverseDeque(d1);

 //display all the element of deque
 cout<<"Reverse by using first method :- ";
for(auto it=d1.begin();it!=d1.end();it++)
    cout<<*it<<" ";
 cout<<endl;

 //Reverse deque elements by using method 2
 ReverseDeque(d1);

 //display all the element of deque
  cout<<"Reverse by using second method :- ";
for(auto it=d1.begin();it!=d1.end();it++)
    cout<<*it<<" ";
 cout<<endl;

 //copy deque into a vector
 vector<int> v=dequeToVector(d1);

 //display all the element of vector
 cout<<"Elements of vector :- ";
for(auto it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
 cout<<endl;
getch();
}


void reverseDeque(deque<int> &d)
{
    deque <int> e;
    for(auto it=d.rbegin();it!=d.rend();it++)
    e.push_back(*it);

    d=e;
}
void ReverseDeque(deque<int> &d)
{
    int j=d.size();
    for(int i=0;i<j/2;i++)
        swap(d[j-1-i],d[i]);
}
vector<int> dequeToVector(deque<int> d)
{
    vector <int> e;
    for(auto it=d.begin();it!=d.end();it++)
        e.push_back(*it);
    return e;
}


