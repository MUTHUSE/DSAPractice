#include <bits/stdc++.h>
using namespace std;
/**
 *          A
 *          BB
 *          CCC
 *          DDDD
 *          EEEEE
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch;
        }
        ch += 1;
        cout<<"\n";
    }
    return 0;
}
