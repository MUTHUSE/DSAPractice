// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
16 11 6 1 -4 1 6 11 16
  */
vector<int> pattern(int N){
    // code here
    vector<int>ans;
    ans.push_back(N);
    int newN = N;
    while(newN>0){
        newN -= 5;
        ans.push_back(newN);
    }
    while(newN<N){
        newN += 5;
        ans.push_back(newN);
    }
    return ans;
}
int main() {
    int N;
    cout<<"Enter the n value : ";
    cin>>N;
    vector<int>ans = pattern(N);
    for(auto i : ans){
        cout<<i<<"\n";
    }

    return 0;
}
