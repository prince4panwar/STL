//Complete the program in the comments
#include<iostream>
#include<conio.h>
#include<stack>
#include<vector>
#include<queue>
using namespace std;
struct Batsman
{
    int totalRuns;
    int highestScore;
    int totalMatches;
    Batsman(int r, int s, int m):totalRuns(r),highestScore(s),totalMatches(m){}
    void showData(){cout<<"\nTotal runs:- "<<totalRuns<<"\nHighest Score:- "<<highestScore<<"\nTotal Matches:-"<<totalMatches<<endl;}
};
struct compareScore
{
    bool operator()(Batsman const &b1,Batsman const &b2)
    {
        return b1.highestScore < b2.highestScore;
    }
};
void priorityQueueToVector(priority_queue<Batsman,vector<Batsman>,compareScore> pq,vector<Batsman> &vec);
int main()
{
    //create a priority_queue to store Batsman type values according to highest score
    priority_queue <Batsman,vector<Batsman>,compareScore> pq;

    Batsman Rahul(2510,121,44),Rohit(3111,147,72),Virat(1088,89,20),Shikhar(1920,182,31),Pankaj(890,54,22);

    //Store Batsman data in the priority_queue
    pq.push(Rahul);
    pq.push(Rohit);
    pq.push(Virat);
    pq.push(Shikhar);
    pq.push(Pankaj);

    //Display the highest scorer batsman
    cout<<"Highest Scorer batsman :- ";
    Batsman bman=pq.top();
    bman.showData();

    //remove the highest scorer batsman
     pq.pop();

    //display the highest scorer batsman's data
    cout<<endl<<"Now! Highest Scorer batsman :- ";
    Batsman Bman=pq.top();
    Bman.showData();

    //Copy priority_queue data into a vector
    vector <Batsman> v;
    priorityQueueToVector(pq,v);

    //Display vector values
    cout<<endl<<"After Copying the data of priority queue into vector :- "<<endl;
    for(int i=0;i<v.size();i++)
        v[i].showData();
    getch();
}
void priorityQueueToVector(priority_queue<Batsman,vector<Batsman>,compareScore> pq , vector<Batsman> &vec)
{
    stack <Batsman,vector<Batsman>> s;
    int j=pq.size();

    for(int i=0;i<j;i++)
    {
        s.push(pq.top());
        pq.pop();
    }
    for(int i=0;i<j;i++)
    {
        vec.push_back(s.top());
        s.pop();
    }
}


