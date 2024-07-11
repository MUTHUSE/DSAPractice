/**
 Enter the n value : 4
ABCD
E$$F
G$$H
IJKL
*/
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    char c = 'A';
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == 0 || i == n-1){
                cout<<c;
                c++;
            }else{
                if(j == 0 || j == n-1){
                    cout<<c;
                    c++;
                }else{
                    cout<<"$";
                }
            }
        }
        cout<<"\n";
    }

    return 0;
}
