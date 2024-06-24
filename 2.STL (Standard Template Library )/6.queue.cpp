#include<bits/stdc++.h>
using namespace std;
// First In First Out

int main(){
    // initialization and declaration
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    queue<int>q1(q);
    queue<int>q2;
    q2.swap(q);

    // erase the data
    q2.pop();

    // print the front element
    cout<<"\n Front of the Queue : "<<q1.front();

    // print the last element
    cout<<"\n Last element of the Queue : "<<q1.back();

    // Size of the queue
    cout<<"\n Size of the Queue : "<<q1.size();

    // check the queue empty or not
    // return 1 if the queue is empty
    // return 0 if the queue is not empty
    cout<<"\n The Queue q1 is empty or not : "<<q1.empty();
    cout<<"\n The Queue q is empty or not : "<<q.empty();

    return 0;
}
