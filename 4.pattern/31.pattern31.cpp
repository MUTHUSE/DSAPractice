// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  * ** *** **** ***** ****** 
  */
void printPattern(int N)
{
    // Write Your Code here
    for(int i = 1; i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<" ";
    }
}
int main() {
    int N;
    cout<<"Enter the n value : ";
    cin>>N;
    printPattern(N);

    return 0;
}
