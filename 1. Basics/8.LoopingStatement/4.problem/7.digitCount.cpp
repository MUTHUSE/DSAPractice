#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter the number : ";
    cin>>n;
    
    int num = n,rem,count=0;
    while(num>0){
        rem = num%10;
        count += 1;
        num = num/10;
    }
    cout<<"\n Number of digits in "<<n<<" : "<<count;

    return 0;
}
