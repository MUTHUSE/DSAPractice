#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter the number : ";
    cin>>n;
    
    int num = n,rem,arm=0;
    while(num>0){
        rem = num%10;
        arm = (rem*rem*rem)+arm;
        num = num/10;
    }
    if(n == arm){
        cout<<n<<" is a armstrong";
    }else{
        cout<<n<<" is not a armstrong";
    }

    return 0;
}
