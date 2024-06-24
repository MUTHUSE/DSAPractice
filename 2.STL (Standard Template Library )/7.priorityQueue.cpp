#include<bits/stdc++.h>
using namespace std;
// max element stay on the top

int main(){
    // Initialization
    priority_queue<int>p;
    p.push(2);
    p.push(1);
    p.push(7);
    p.push(2);
    priority_queue<int>p1(p);
    priority_queue<int>p2;
    p2.swap(p1);

    // print the top of the queue
    cout<<"\n The top element of the priority queue : "<<p.top();

    p.emplace(8);

    // erase the data
    p.pop();

    // size the priority queue
    cout<<"\n The size of the Priority Queue : "<<p.size();

    // check the priority queue is empty or not
    // return 1 if the priority queue is empty
    // return 0 if the priority queue is not empty
    cout<<"\n The Priority queue is empty or not : "<<p.empty();

    // minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(7);
    pq.push(3);
    pq.push(4);
    pq.emplace(7);
    // top of the pq priority queue
    cout<<"\n The top of the pq priority queue : "<<pq.top();
    return 0;
}
