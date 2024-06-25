#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 999;
    
    cout<<"\n Armstrong number between 100 to 999 : ";
    for(int i = 100; i<=n;i++){
        int num = i;
        int rem = 0;
        int arm = 0;
        while(num > 0){
            rem = num%10;
            arm = arm + (rem * rem * rem);
            num = num / 10;
        }
        if(i == arm){
            cout<<i<<" ";
        }
    }

    return 0;
}
