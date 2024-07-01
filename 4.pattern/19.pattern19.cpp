// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/**
 *                  A
 *                  BB
 *                  CCC
 *                  DDDD
 *                  EEEEE
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    char ch = 'A';
    for(int i = 0; i<n;i++){
        char c = ch + i;
        for(int j = 0;j<=i;j++){
            cout<<c;
        }
        cout<<"\n";
    }

    return 0;
}
