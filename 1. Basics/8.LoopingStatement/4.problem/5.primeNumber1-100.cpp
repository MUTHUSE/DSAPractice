#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 100;
    
    cout<<"\n Prime number between 1 to 100 : ";
    for(int i = 1; i<=n;i++){
        int count = 0;
        for(int j = 1; j*j <= i;j++){
            if(i%j==0){
                count+=1;
                if((i%(i/j)==0) && ((i/j)!=j)){
                    count+=1;
                }
            }
        }
        if(count == 2){
            cout<<i<<" ";
        }
    }

    return 0;
}
