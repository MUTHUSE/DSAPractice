/**
 Enter the n value : 3
333222111
332211
321
  */
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    for(int i = 0; i < n;i++){
        int star = n;
        for(int j = 0; j < n;j++){
            for(int k = 0; k<(n-i);k++){
                cout<<star;
            }
            star--;
        }
        cout<<"\n";
    }

    return 0;
}
