/**
 Enter the n value : 5
*
**
***
****
*****
****
***
**
*
*/
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    for(int i = 0;i<(2*n)-1;i++){
        if(n>i){
            for(int j = 0;j<=i;j++){
                cout<<"*";
            }
        }else{
            for(int j = (2*n)-1;j>i;j--){
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    return 0;
}
