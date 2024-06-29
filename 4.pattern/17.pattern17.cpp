#include <bits/stdc++.h>
using namespace std;
/**
 *          ---A---
 *          --ABA--
 *          -ABCBA-
 *          ABCDCBA
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j = i;j<n-1;j++){
            cout<<"-";
        }
        char c;
        for(int j = 0;j<=i;j++){
            c = ch + j;
            cout<<c;
        }
        for(int j = 0;j<i;j++){
            c = c - 1;
            cout<<c;
        }
        for(int j = i;j<n-1;j++){
            cout<<"-";
        }
        cout<<"\n";
    }
    return 0;
}
