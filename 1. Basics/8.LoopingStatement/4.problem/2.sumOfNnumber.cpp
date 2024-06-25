#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout<<"\n Enter the n value : ";
    cin>>n;
    for(int i = 1; i<=n;i++){
        sum += i;
    }
    cout<<"\n Sum of "<<n<<" number is : "<<sum;
    return 0;
}
