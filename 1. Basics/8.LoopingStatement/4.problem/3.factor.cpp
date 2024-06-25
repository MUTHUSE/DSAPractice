#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter the number : ";
    cin>>n;
    
    cout<<"\n Factor of "<<n<<" : ";
    for(int i = 1; i*i<=n;i++){
        if(n%i == 0){
            cout<<i<<" ";
            if((n%(n/i)==0) && (n/i != i)){
                cout<<(n/i)<<" ";
            }
        }
    }

    return 0;
}
