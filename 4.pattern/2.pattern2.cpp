#include <bits/stdc++.h>
using namespace std;
/**
 *       *
 *       **
 *       ***
 *       ****
 *       *****
*/

int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
