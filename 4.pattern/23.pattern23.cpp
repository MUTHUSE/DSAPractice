/**
  Enter the n value : 5
  1 
  1 2 
  1 2 3 
  1 2 3 4 
  1 2 3 4 5 
  */
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    for(int i = 0;i<n;i++){
        int count = 1;
        for(int j = 0;j<=i;j++){
            cout<<count;
            cout<<" ";
            count++;
        }
        cout<<"\n";
    }

    return 0;
}
