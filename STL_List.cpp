//1.  Complete the program as directed in the comments
#include<iostream>
#include<conio.h>
#include<list>
using namespace std;
int main()
{
    //Create as list of int values
    list <int> l1;

    //Store element 10 in the list l1 using push_back method
    l1.push_back(10);

    //Store element 20 in the list l1 using push_front method
    l1.push_front(20);

    //Store element 30 in the list after first element using insert function
    list<int>::iterator it=l1.begin();
    it++;
    l1.insert(it,30);
    for(int num:l1)
        cout<<num<<" ";
    cout<<endl;

    //Store element 22,44,33 in the list after second element using insert function

    l1.insert(it,{22,44,33});

    //Print list element using range-for-loop
     for(int num:l1)
        cout<<num<<" ";
    cout<<endl;

    //Edit second last element of the list with new element value 25
    it--;
    l1.insert(it,25);
    l1.erase(it);

    //Print element using for loop
    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    //Erase first element of the list using pop_front method
    l1.pop_front();
     for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    //Erase last element of the list using pop_back method
    l1.pop_back();

    //Print element using for loop
     for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    //Erase all element of the list except first and last element using erase method
    it--;
    l1.erase(it);
    it--;
    it--;
    it--;
    l1.erase(it);

    //Print element using for loop
    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    getch();
}
