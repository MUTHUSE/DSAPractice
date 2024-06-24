#include<bits/stdc++.h>
using namespace std;

int main(){
    // initialization and declaration
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(0);
    d.emplace_front(6);
    deque<int>d1(3);
    deque<int>d2(3,100);
    d2.swap(d1);

    // add the data to variable
    d.insert(d.begin(),4);
    d.insert(d.begin()+1,2,10);
    d.insert(d.begin()+2,d1.begin(),d1.end());

    // access the data
    deque<int>::iterator it = d.begin();
    cout<<"\n Deque Begin Data : "<<*it;
    deque<int>::iterator it1 = d.end();
    cout<<"\n Deque End Data : "<<*it1;
    deque<int>::reverse_iterator it2 = d.rbegin();
    cout<<"\n Deque Reverse Begin Data : "<<*it2;
    deque<int>::reverse_iterator it3 = d.rend();
    cout<<"\n Deque Reverse End Data : "<<*it3;

    // Looping Data
    cout<<"\n Looping Concept : ";
    for(deque<int>::iterator i1 = d.begin(); i1 != d.end();i1++){
        cout<<*i1<<" ";
    }
    cout<<"\n Another Type of Looping Concept : ";
    for(auto i2 = d.begin();i2 != d.end(); i2++){
        cout<<*i2<<" ";
    }
    cout<<"\n Simple Method : ";
    for(auto i:d){
        cout<<i<<" ";
    }

    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d2.emplace_back(4);

    // delete the data
    cout<<"\n Before Delete the Data : ";
    for(auto i:d2){
        cout<<i<<" ";
    }
    d2.pop_back();
    d2.pop_front();
    d2.erase(d2.begin()+1);
    d2.erase(d2.begin(),d2.begin()+2);
    d2.clear();
    cout<<"\n After Delete the Data : ";
    for(auto i:d2){
        cout<<i<<" ";
    }

    // size of the deque
    auto size_deque = size(d);
    cout<<"\n Size of the deque variable : "<<size_deque;

    // check the data is exist or not
    // 1 if deque is empty
    // 0 if deque has value
    cout<<"\n Deque d value availability : "<<d.empty();
    cout<<"\n Deque d2 value availability : "<<d2.empty();
    return 0;
}
