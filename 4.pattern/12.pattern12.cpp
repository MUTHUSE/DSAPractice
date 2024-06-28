#include <bits/stdc++.h>
using namespace std;
/**
 *                   1------1
 *                   12----21
 *                   123--321
 *                   12344321
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    int j;
    for(int i = 1; i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*(n-i);k++){
            cout<<"-";
        }
        for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}
