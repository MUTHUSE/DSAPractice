#include<bits/stdc++.h>
using namespace std;
// unique key stored.
// sorted data stored
int main(){
    map<int,int>mp;
    mp[1]=2;
    mp.emplace(3,1);
    map<int,pair<int,int>>mpp;
    mpp[10] = {2,3};

    // Looping concept
    cout<<"\n";
    for(auto i:mp){
        cout<<i.first<<" -> "<<i.second<<"\n";
    }

    // access the data
    cout<<mp[1]<<"\n";

    // find concept
    auto it = mp.find(2);
    cout<<"\n find 2 : "<<it->first<<" "<<it->second;
    auto it1 = mp.find(1);
    cout<<"\n Find 1 : "<<it1->first<<" "<<it1->second;

    map<int,int>mp1;
    mp1[9]=10;
    mp1.emplace(1,2);
    mp1.emplace(8,3);
    mp1.emplace(9,5);

    // swap concept
    mp1.swap(mp);

    // Check size of the map
    cout<<"\n Size of the map : "<<mp.size();

    // check the empty or not
    // return 1 if it is empty
    // return 0 if it is not empty
    cout<<"\n mp Empty or not : "<<mp.empty();
    map<int,int>m;
    cout<<"\n m empty or not : "<<m.empty();

    // delete the data
    mp.erase(1);

    cout<<"\n Mp :";
    for(auto i:mp){
        cout<<i.first<<" -> "<<i.second<<"\n";
    }

    cout<<"\n Mp1 :";
    for(auto i:mp1){
        cout<<i.first<<" -> "<<i.second<<"\n";
    }

    // lower bound
    auto lb = mp.lower_bound(2);
    cout<<"\n 2 lower bound is : "<<(*lb).first<<" "<<(*lb).second;
    auto lb1 = mp.lower_bound(11);
    cout<<"\n 11 lower bound is : "<<(*lb1).first<<" "<<(*lb1).second;

    /// upper bound
    auto ub = mp.upper_bound(2);
    cout<<"\n 2 upper bound is : "<<(*ub).first<<" "<<(*ub).second;
    auto ub1 = mp.upper_bound(11);
    cout<<"\n 11 upper bound is : "<<(*ub1).first<<" "<<(*ub1).second;

    return 0;
}
