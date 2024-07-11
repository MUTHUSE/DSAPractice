#include <bits/stdc++.h>
using namespace std;
/**
M---------M
-u-------u-
--t-----t--
---h---h---
----u-u----
-----s-----
----e-e----
---l---l---
--v-----v--
-i-------i-
i---------i
*/
int main() {
    string s = "Muthuselvii";
    int n = s.size();
    int mid = 0+n/2;
    for(int i = 0; i<n;i++){
        if(mid>=i){
            for(int j=0;j<i;j++){
                cout<<"-";
            }
        }else{
            for(int j=i;j<n-1;j++){
                cout<<"-";
            }
        }
        cout<<s[i];
        if(mid>i){
            for(int j=i;j<((n-2)-i);j++){
                cout<<"-";
            }
        }else{
            for(int j=0;j<(2*i-n);j++){
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
