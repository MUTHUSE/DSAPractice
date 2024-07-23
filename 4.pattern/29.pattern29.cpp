// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
ABCDEFGHGFEDCBA
ABCDEFG GFEDCBA
ABCDEF   FEDCBA
ABCDE     EDCBA
ABCD       DCBA
ABC         CBA
AB           BA
A             A
*/
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
        for(int j = 0;j<2*i-1;j++){
            str+=" ";
        }
        if(i==0){
            ch-=2;
            for(int j = N-(i+1);j>0;j--){
                str+=ch;
                ch-=1;
            }
        }else{
            ch-=1;
            for(int j = N-(i+1);j>=0;j--){
                str+=ch;
                ch-=1;
            }
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
