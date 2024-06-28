#include <bits/stdc++.h>
using namespace std;
/**
 *               ----*----
 *               ---***---
 *               --*****--
 *               -*******-
 *               *********
 *               *********
 *               -*******-
 *               --*****--
 *               ---***---
 *               ----*----
*/

int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<"-";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<"*";
        }
        for(int j=i;j<n;j++){
            cout<<"-";
        }
        cout<<"\n";
    }
    for(int i = n;i>=1;i--){
        for(int j=i;j<n;j++){
            cout<<"-";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<"*";
        }
        for(int j=i;j<n;j++){
            cout<<"-";
        }
        cout<<"\n";
    }

    return 0;
}
