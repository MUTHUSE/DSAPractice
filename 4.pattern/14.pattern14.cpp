#include <bits/stdc++.h>
using namespace std;
/**
 *                   A
 *                   AB
 *                   ABC
 *                   ABCD
 *                   ABCDE
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    for(int i = 0; i<n;i++){
        char c = 'A';
        for(int j=0;j<=i;j++){
            char ch = j+c;
            cout<<ch;
        }
        cout<<"\n";
    }

    return 0;
}
