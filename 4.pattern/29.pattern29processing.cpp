// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<string> revCharBridge(int N) {
    // code here
    vector<string>ans;
    for(int i = 0; i<N;i++){
        string str;
        char ch = 'A';
        for(int j = i;j<N;j++){
            str+=ch;
            ch+=1;
        }
        for(int j = 0;j<i;j++){
            str+="-";
        }
        ch-=2;
        for(int j = N-(i+1);j>0;j--){
            str+=ch;
            ch-=1;
        }
        ans.push_back(str);
    }
    return ans;
}
int main() {
    int N;
    cout<<"Enter the n value : ";
    cin>>N;
    vector<string>ans = revCharBridge(N);
    for(auto i : ans){
        cout<<i<<"\n";
    }

    return 0;
}
