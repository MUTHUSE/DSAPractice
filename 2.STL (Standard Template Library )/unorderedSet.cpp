#include<bits/stdc++.h>
using namespace std;
// it stores unique value.
int main(){
    unordered_set<int>u;
    u.insert(12);
    u.insert(7);
    u.insert(8);
    u.insert(8);
    u.insert(1);
    u.insert(5);
    u.insert(u.begin(),9);

    // access the data
    unordered_set<int>::iterator it = u.begin();
    cout<<"\n Unordered set u begin element is : "<<*it;
    auto f = u.find(8);
    cout<<"\n Find the element 8 is : "<<*f;

    // size of the unordered set
    cout<<"\n Size of the unordered set u is : "<<u.size();

    // check empty or not
    // return 1 if empty
    // return 0 if not empty
    cout<<"\n Check the unordered set u empty or not : "<<u.empty();
    unordered_set<int>us;
    cout<<"\n Check the unordered set us empty or not : "<<us.empty();

    // delete the data
    u.erase(8);
    auto f1 = u.find(9);
    auto f2 = u.find(10);
    u.erase(f1,f2);

    u.insert(1);
    u.insert(2);
    u.insert(3);
    u.insert(6);
    u.insert(5);
    u.insert(4);

    // Looping Concept
    cout<<"\n Looping Concept : ";
    for(unordered_set<int>::iterator itu = u.begin(); itu != u.end(); itu++){
        cout<<*itu<<" ";
    }
    cout<<"\n Another Looping Concept : ";
    for(auto itu = u.begin(); itu != u.end(); itu++){
        cout<<*itu<<" ";
    }
    cout<<"\n Simple Looping Concept : ";
    for(auto i:u){
        cout<<i<<" ";
    }
    return 0;
}
