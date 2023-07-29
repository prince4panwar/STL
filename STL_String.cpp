#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void stringReverse(string &s);
int countWords(string &s1);
void trim(string &s1);
void splitExtraSpaces(string &s1);
void splitStringToWords(string &s1,string words[]);
int main()
{
    //create a string object s1
    string s1;

    //Assign a string "mysirg education services"into s1
    s1="mysirg education services";

    //print string value cout
    cout<<s1<<endl;

    //add "private limited" at the end of string s1 using concatenation operator
    s1=s1+" private limited";

    //print string value using cout
    cout<<s1<<endl;

    //Erase last word from the string s1 using position
    s1.erase(40);
    //s1.pop_back();

    //print string value using cout
    cout<<s1<<endl;

    //Erase a particular character from the string g from mysirg
    s1.erase(5,1);

    // print string value using cout
    cout<<s1<<endl;

    //Erase services from the string s1 using iterators
    s1.erase(s1.begin()+16,s1.begin()+25);

    //print string value using cout
    cout<<s1<<endl;

    //Append a character '.' (full stop) at the end of the string s1
    s1.append(".");

    //print string value using cout
    cout<<s1<<endl;

    //Re-initializing the string object with the same value but with extra spaces
    s1="mysirg  education  services  private  limited";
    cout<<s1<<endl;

    //Reverse a string
    stringReverse(s1);

    //print string value using cout
    cout<<s1<<endl;

    //Remove leading spaces from the string s1
    trim(s1);

    //print string value using cout
    //cout<<s1<<endl;

    //count words in the string
    //int w=countWords(s1);
    //cout<<"Word count = "<<W<<endl;

    //RemoveExtraSpaces(s1);

    //print string value using cout

    //print length of the string

    //split string s1 into the words
    //string words[w];
    //splitSringToWords(s1,words);

    //print all the words stored in words array
    //for(int i=0;i<=4;i++)
        //cout<<i<<" - "words[i]<<endl;
     getch();
}
void stringReverse(string &s)
{
    string r;
    int l=s.length();
    for(int i=1;i<=l;i++)
    r.push_back(s[l-i]);
    s=r;
}
void trim(string &s1)
{
    //cout<<s1.at(2);
    for(int i=0;i<=s1.length();i++)
    {
        //if(s1.at(3)==" ")
          // s1.erase(i,1);
    }
}
