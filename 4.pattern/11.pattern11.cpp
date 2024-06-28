#include <bits/stdc++.h>
using namespace std;
/**
 *                   1
 *                   01
 *                   101
 *                   0101
 *                   10101
*/
int main() {
    // Write C++ code here
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    int num = 1;
    for(int i = 0; i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num;
            if(num == 1){
                num = 0;
            }else{
                num = 1;
            }
        }
        cout<<"\n";
    }

    return 0;
}
