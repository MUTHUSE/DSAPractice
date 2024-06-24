#include<bits/stdc++.h>
using namespace std;
// Last In First Out

int main(){
    // initialization and declaration
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.emplace(6);
    stack<int>s1(s);
    s1.swap(s);

    // erase the data
    s.pop();

    // print the top value of the stack
    cout<<"\n The top of the stack : "<<s.top();

    // size of the stack
    cout<<"\n Size of the stack : "<<s.size();

    // check the stack whether empty or not
    // empty then return 1
    // not empty then return 0
    cout<<"\n Stack s empty or not : "<<s.empty();

    return 0;
}
