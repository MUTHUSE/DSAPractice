#include<bits/stdc++.h>
using namespace std;
int main(){
    // list initialization and declaring
    list<int>ls;
    ls.push_back(2); // push back the element
    ls.emplace_back(3); // push back the element
    list<int>ls1(ls); // ls data copy to ls1
    list<int>ls2(3); // initialize the empty data to ls2
    list<int>ls3(2,100); // 2 is the size, value is 100
    ls3.swap(ls2); // swap the data

    // data add to list
    ls3.insert(ls3.begin(),100);
    ls3.insert(ls3.begin(),2,40);
    ls3.insert(ls3.begin(),ls1.begin(),ls1.end());

    // access the data
    list<int>::iterator it = ls3.begin();
    cout<<"\n"<<*it;
    list<int>::iterator it1 = ls3.end();
    cout<<"\n"<<*it1;
    list<int>::reverse_iterator it2 = ls3.rbegin();
    cout<<"\n"<<*it2;
    list<int>::reverse_iterator it3 = ls3.rend();
    cout<<"\n"<<*it3;

    // delete the data
    ls3.erase(ls3.begin());
    ls3.erase(ls3.begin(),ls3.end());
    ls.pop_back();
    ls.clear();

    ls.push_back(3);
    ls.push_back(6);
    ls.push_back(9);
    ls.push_back(12);
    ls.push_back(15);
    ls.push_front(1);
    ls.emplace_front(0);

    // Looping concept
    cout<<"\n Loop Method : ";
    for(list<int>::iterator i1=ls.begin(); i1 != ls.end(); i1++){
        cout<<*i1<<" ";
    }
    cout<<"\n Another Loop Method : ";
    for(auto i2 = ls.begin(); i2 != ls.end(); i2++){
        cout<<*i2<<" ";
    }
    cout<<"\n Simple Method : ";
    for(auto i:ls){
        cout<<i<<" ";
    }

    // size of the list
    cout<<"\n Size of the ls list : "<<ls.size();

    // check the list is empty or not
    // return 1 when list is empty.
    // return 0 when list is not empty.
    cout<<"\n ls is whether empty or not : "<<ls.empty();
    cout<<"\n ls3 is whether empty or not : "<<ls3.empty();

    return 0;
}
