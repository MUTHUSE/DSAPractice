#include<bits/stdc++.h>
using namespace std;
// Stores everything in sorted order and unique data will be stored.

int main(){
    // initialization and declaration
    set<int>s;
    s.emplace(1);
    s.insert(9);
    s.insert(8);
    s.insert(6);
    s.insert(10);
    s.insert(3);
    s.insert(3);
    s.insert(s.begin(),2);

    // find concept
    auto it = s.find(8);
    cout<<"\n Find the 8 element in set s : "<<*it;
    auto it1 = s.find(11);
    // if a element is not in the set the return set.end()
    cout<<"\n Find the 2 element in set s : "<<*it1; // return s.end() if that element is not in set

    // Looping concept
    cout<<"\n Looping Concept : ";
    for(set<int>::iterator it2 = s.begin(); it2 != s.end(); it2++){
        cout<<*it2<<" ";
    }
    cout<<"\n Another Looping Concept : ";
    for(auto it2 = s.begin(); it2 != s.end(); it2++){
        cout<<*it2<<" ";
    }
    cout<<"\n Simple Looping Concept : ";
    for(auto it2:s){
        cout<<it2<<" ";
    }

    // erase the data from set
    s.erase(2);
    auto i1 = s.find(1);
    auto i2 = s.find(3);
    s.erase(i1,i2);
    auto i3 = s.find(3);
    s.erase(i3);

    // count the element
    int cnt = s.count(3);
    // if exist then return 1
    // false return 0
    cout<<"\n Count 3 element in a set : "<<cnt;

    // check the set empty or not
    // return 1 set is empty
    // otherwise return 0
    cout<<"\n Check the set s empty or not : "<<s.empty();

    // print the size of the set
    cout<<"\n Set s size : "<<s.size();

    //access the element
    set<int>::iterator it3 = s.begin();
    cout<<"\n Set s begin element is : "<<*it3;
    set<int>::iterator it4 = s.end();
    cout<<"\n Set s end element is : "<<*it4;
    set<int>::reverse_iterator it5 = s.rbegin();
    cout<<"\n Set s reverse begin element is : "<<*it5;
    set<int>::reverse_iterator it6 = s.rend();
    cout<<"\n Set s reverse end element is : "<<*it6;

    cout<<"\n Simple Looping Concept : ";
    for(auto it2:s){
        cout<<it2<<" ";
    }

    // lower bound and upper bound
    // Lower bound which is returns first occurrence of the elements if it is occurs and if it is doesn't
    // occurs returns the iterator pointing to the element which is immediate next greater of the given element
    auto is = s.lower_bound(10);
    cout<<"\n Set s, 10 element lower bound is : "<<*is;
    auto is1 = s.lower_bound(11);
    cout<<"\n Set s, 11 element lower bound is : "<<*is1;
    auto is2 = s.upper_bound(1);
    cout<<"\n Set s, 1 element upper bound is : "<<*is2;
    auto is3 = s.upper_bound(10);
    cout<<"\n Set s, 11 element upper bound is : "<<*is3;

    return 0;
}
