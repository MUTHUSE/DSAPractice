// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/**
 *                  E
 *                  DE
 *                  CDE
 *                  BCDE
 *                  ABCDE
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    for(int i = 0; i<n;i++){
        char ch = 'E' - i;
        for(int j = 0;j<=i;j++){
            cout<<ch;
            ch += 1;
        }
        cout<<"\n";
    }

    return 0;
}
