#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "geeksii";
    int n = s.size();
    for(int i = 0; i<n;i++){
        if((n/2)>=i){
            for(int j=0;j<i;j++){
                cout<<"-";
            }
        }else{
            for(int j=i;j<n-1;j++){
                cout<<"-";
            }
        }
        cout<<s[i];
        if((n/2)>=i){
            for(int j=i;j<((n-2)-i);j++){
                cout<<"-";
            }
        }else{
            for(int j=(n/2);j<i;j++){
                cout<<"-";
            }
        }
        if((n/2)!=i){
        cout<<s[i];
        }
        if((n/2)>=i){
            for(int j=0;j<i;j++){
                cout<<"-";
            }
        }else{
            for(int j=i;j<n-1;j++){
                cout<<"-";
            }
        }
        cout<<"\n";
    }
    return 0;
}
