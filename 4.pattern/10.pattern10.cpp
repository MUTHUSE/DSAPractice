#include <bits/stdc++.h>
using namespace std;
/**
 *                   *
 *                   **
 *                   ***
 *                   ****
 *                   *****
 *                   ****
 *                   ***
 *                   **
 *                   *
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    for(int i = 0; i<n;i++){
        if(i<=(n/2)){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
        }else{
            for(int j=i;j<n;j++){
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    return 0;
}

int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    for(int i = 1; i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
