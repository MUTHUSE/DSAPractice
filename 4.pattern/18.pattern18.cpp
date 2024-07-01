// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/**
 *                  ABCDE
 *                  ABCD
 *                  ABC
 *                  AB
 *                  A
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    for(int i = n; i>0;i--){
        char ch = 'A';
        for(int j = 0;j<i;j++){
            char c = ch + j;
            cout<<c;
        }
        cout<<"\n";
    }

    return 0;
}
