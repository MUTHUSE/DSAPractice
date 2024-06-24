#include<bits/stdc++.h>
using namespace std;
// same as set. But it stored only Sorted order. not unique.
int main(){
    multiset<int>m;
    m.insert(1);
    m.insert(1);
    m.insert(2);
    m.insert(0);
    m.insert(m.begin(),3);

    // Access the data
    multiset<int>::iterator it = m.begin();
    cout<<"\n Multi set m begin value is : "<<*it;
    multiset<int>::iterator it1 = m.end();
    cout<<"\n Multi set m end value is : "<<*it1;
    multiset<int>::reverse_iterator it2 = m.rbegin();
    cout<<"\n Multi set m reverse begin value is : "<<*it2;
    multiset<int>::reverse_iterator it3 = m.rend();
    cout<<"\n Multi set m reverse end value is : "<<*it3;

    // Looping Concept
    cout<<"\n Looping Concept : ";
    for(multiset<int>::iterator i = m.begin(); i != m.end(); i++){
        cout<<*i<<" ";
    }
    cout<<"\n Another Looping Concept : ";
    for(auto i = m.begin(); i != m.end(); i++){
        cout<<*i<<" ";
    }
    cout<<"\n Simple Looping Concept : ";
    for(auto i:m){
        cout<<i<<" ";
    }



    // find concept
    // not find then return m.end() otherwise return value
    auto i = m.find(2);
    cout<<"\n Multi set m find 2 : "<<*i;
    auto i1 = m.find(10);
    cout<<"\n Multi set m find 10 : "<<*i1;

    m.insert(17);

    // delete the data
    m.erase(1); // delete the all the 1 element
    m.erase(i,i1);
    m.erase(m.find(0));

    m.insert(19);
    m.insert(18);
    m.insert(17);
    m.insert(16);
    m.insert(11);
    m.insert(12);
    m.insert(13);
    m.insert(14);
    m.insert(15);
    m.insert(16);

    cout<<"\n";
    for(auto l:m){
        cout<<l<<" ";
    }

    // count the data
    cout<<"\n Count the Multi set m is : "<<m.size();

    // empty checking
    // return 1 if set is empty
    // return 0 if set is not empty
    cout<<"\n Check multi set m is empty or not : "<<m.empty();
    multiset<int>m1;
    cout<<"\n Check multi set m1 is empty or not : "<<m1.empty();

    // lower bound and upper bound
    // lower bound is returns the first occurrence of the elements if it is occurs.
    // and if it is does not occurs return the iterator pointing to the element which is immediate next greater of the given element
    auto lb = m.lower_bound(1);
    cout<<"\n Multi set m 1 lower bound value is : "<<*lb;
    auto ib1 = m.lower_bound(12);
    cout<<"\n Multi set m 12 lower bound value is : "<<*ib1;
    auto ub = m.upper_bound(1);
    cout<<"\n Multi set m 1 upper bound value is : "<<*ub;
    auto ub1 = m.upper_bound(12);
    cout<<"\n Multi set m 12 upper bound value is : "<<*ub1;
    return 0;
}
