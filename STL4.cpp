/*Define a class template, array, such that an instance of the class can store homogeneous data.
Define constructor to initialize the size of the array. Also define member function to insert
an item in the array, retrieve an item from specified index, count number of elements in the
array, edit an item, delete an item and search an item. Implement array in such a way that the
elements stored are always in the left blocks without any blocks leaving empty in between */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
template <class X>
class ArrayADT
{
private:
    int capacity;
    int lastIndex;
    X *ptr;
public:
    ArrayADT(int cap)
    {
        capacity=cap;
        lastIndex=-1;
        if(capacity<=0)
            cout<<"Invalid Input"<<endl;
        else
        ptr=new X[capacity];
    }
   void append_Array(X data)
    {
        if(lastIndex+1==capacity)
        {
            cout<<"Array overflow";
        }
        else
        {
            lastIndex++;
            ptr[lastIndex]=data;
        }

    }
        void insert_Array(int index,X data)
    {
        if(index<0||lastIndex+1<index)
            cout<<"Operation failed :- Invalid Index"<<endl;
        else if(lastIndex+1==capacity)
           cout<<"Operation failed :- Array overflow"<<endl;
        else
        {
            for(int i=lastIndex;i>=index;i--)
                ptr[i+1]=ptr[i];

            ptr[index]=data;
            lastIndex++;
        }
    }
    int count_Array()
    {
        return lastIndex+1;
    }

    X get_Array(int index)
    {
        if(index<0||lastIndex<index)
            cout<<"Operation failed :- Invalid Index"<<endl;
        else
        {
            return ptr[index];
        }
    }
    void delete_Array(int index)
    {
        if(index<0||index>lastIndex)
            cout<<"Operation Failed :- Invalid Input or Empty Array";
        else
        {
            for(int i=index;i<lastIndex;i++)
            ptr[i]=ptr[i+1];
            lastIndex--;
        }
    }
    int search_Array(X data)
        {
            for(int i=0;i<=lastIndex;i++)
                if(ptr[i]==data)
                    return i;
            return -1;
        }
    void edit_Array(int index,X data)
    {
        if(index<0||index>lastIndex)
            cout<<"Invalid Input or Empty Array ";
        else
        {
            ptr[index]=data;
        }
    }
    void view_Array()
    {
        if(lastIndex==-1)
            cout<<"Empty Array ";
        else
            for(int i=0;i<=lastIndex;i++)
            cout<<ptr[i]<<" ";
    }
};



int menu()
{
    int choice;
    cout<<"\n1. Append";
    cout<<"\n2. Insert";
    cout<<"\n3. Delete";
    cout<<"\n4. Edit";
    cout<<"\n5. Search";
    cout<<"\n6. View";
    cout<<"\n7. Exit"<<endl<<endl;
    cout<<"Enter number (1-7) to proceed for Array Operations :- ";
    cin>>choice;
    return choice;
}
void viewArrayData(ArrayADT &arr)
{
    int i;
    cout<<endl;
    for(i=0;i<arr.count_Array();i++)
        cout<<arr.get_Array(i)<<" ";
}
int main()
{
    int index,data;
    ArrayADT <int> arr(6);
    while(true)
    {
        system("cls");
        cout<<"\nTotal Elements in array :- "<<arr.count_Array();
        viewArrayData(arr);
        switch(menu())
        {
        case 1:
            cout<<"Enter data to append :- ";
            cin>>data;
            arr.append_Array(data);
            break;
        case 2:
            cout<<"Enter data to insert :- ";
            cin>>data;
            cout<<"Enter index to insert :- ";
            cin>>index;
            arr.insert_Array(index,data);
            break;
        case 3:
            cout<<"Enter index for deletion :- ";
            cin>>index;
            arr.delete_Array(index);
            break;
        case 4:
            cout<<"Enter data to search :- ";
            cin>>index;
            cout<<"Enter data to edit :- ";
            cin>>data;
            arr.edit_Array(index,data);
            break;
        case 5:
            cout<<"Enter data to search :- ";
            cin>>data;
            index=arr.search_Array(data);
            if(index==-1)
                cout<<"Search failed :- ";
            else
                cout<<"Element found at index = "<<index;
            break;
        case 6:
            exit(0);
        default:
            cout<<"Invalid choice";

        }
        getch();
    }

}
