#include<bits/stdc++.h>
using namespace std;
int main(){
    // Initialization and declare the vector
    vector<int>v;
    v.push_back(3);
    v.emplace_back(5);
    vector<int>v1(5); // empty vector with value = 0
    vector<int>v2(v1); // copy the value
    vector<int>v3(2,100); // vector size 2. value is 100
    v2.swap(v3); // exchange the data's

    // data add to vector
    v.insert(v.begin(),100); // insert the value at beginning position
    v.insert(v.begin()+1,2,200); // insert the values at beginning + 1 th position. 2 is the size. 200 is the value
    v.insert(v.end()-1,v1.begin(),v1.end());

    // delete the data's
    v.pop_back(); // delete last element
    v.erase(v.begin()+1); // erase the 2nd element
    v.erase(v.begin(),v.begin()+2); // erase starting from beginning data to beginning + 1 data has been deleted.
    v.clear(); // delete all the data

    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);

    // access the vector
    cout<<"\n"<<v1[0]<<" "<<v1.at(0);
    vector<int>::iterator it = v1.begin(); // the first data of the vector
    cout<<"\n Beginning Element : "<<*it;
    vector<int>::iterator it1 = v1.end(); // last element
    cout<<"\n Last Element : "<<*it1;
    vector<int>::reverse_iterator it2 = v1.rbegin();
    cout<<"\n Reverse Beginning Element : "<<*it2;
    vector<int>::reverse_iterator it3 = v1.rend();
    cout<<"\n Reverse Last Element : "<<*it3;

    // loop
    cout<<"\n For Loop : ";
    for(vector<int>::iterator it4 = v1.begin(); it4 != v1.end(); it4++){
        cout<<*it4<<" ";
    }
    cout<<"\n Another Method : ";
    for(auto it5=v1.begin();it5 != v1.end(); it5++){
        cout<<*it5<<" ";
    }
    cout<<"\n Simple Method : ";
    for(auto i:v1){
        cout<<i<<" ";
    }

    // size of the vector
    int size_vector = v1.size();
    cout<<"\n Size of the vector : "<<size_vector;

    // check the emptiness of the vector
    // 1 means empty, 0 means has data
    int v_empty = v.empty();
    cout<<"\n v vector has empty or not : "<<v_empty;
    int v1_empty = v1.empty();
    cout<<"\n v1 vector has empty or not : "<<v1_empty;

    return 0;
}
