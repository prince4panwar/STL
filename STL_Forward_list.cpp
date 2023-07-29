#include<iostream>
#include<conio.h>
#include<forward_list>
using namespace std;
int main()
{
    //Create a forward_list l1 of int values
    forward_list <int> l1;

    //Store element 10 in the list l1 using push_font method
    l1.push_front(10);

    //Store element 20 in the list before first element using emplace_front method

    l1.emplace_front(20);

    //Store element 30 after first element 20 using emplace_after mathod
    l1.emplace_after(l1.begin(),30);

    //store element 22 in the list after second element using insert_after method
    forward_list<int>::iterator it=l1.begin();
    it++;
    l1.insert_after(it,22);

    //Find number of element in the list. Create int variable lenght to store length of the list
    int lenght=0;
    for(auto it=l1.begin();it!=l1.end();it++)
        lenght++;
    cout<<lenght<<endl;

    //Print list element using Range_for_loop
    for(int num:l1)
        cout<<num<<" ";
    cout<<endl;

    //Store element 35 as last element
    it++;
    it++;
    l1.insert_after(it,35);

    //Print list element using for loop
    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    //Edit second last element of the list with new element value 75
    l1.insert_after(it,75);

    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    //Print first element of the list l1 using front method
    cout<<"First element is "<<l1.front()<<endl;

    //Erase first element of the list using pop_front method
    l1.pop_front();

    for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    //Erase all element except first element using erase_after method
    //for(auto it=l1.begin();it!=l1.end();it++)
    it=l1.begin();
    l1.erase_after(it);
    l1.erase_after(it);
    l1.erase_after(it);
    l1.erase_after(it);

     //Print all the elements using for loop
     for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    //Assign 6 element 20,40,60,100,120 int the forward_list object l1
    l1.insert_after(it,{20,40,60,100,120});

    //Print all the element using for loop
     for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    it=l1.begin();
    l1.erase_after(it);

    //Print all the element using for loop
     for(auto it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

getch();
}
