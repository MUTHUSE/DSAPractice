// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/**
 *                  **********
 *                  ****--****
 *                  ***----***
 *                  **------**
 *                  *--------*
 *                  *--------*
 *                  **------**
 *                  ***----***
 *                  ****--****
 *                  **********
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    for(int i = n; i>0;i--){
        for(int j = 0;j<i;j++){
            cout<<"*";
        }
        for(int j = 0;j<2*(n-i);j++){
            cout<<"-";
        }
        for(int j = 0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = 0; i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<"*";
        }
        for(int j = 1;j<2*(n-i)-1;j++){
            cout<<"-";
        }
        for(int j = 0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
