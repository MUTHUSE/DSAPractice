#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter the number : ";
    cin>>n;
    
    int num = n,rem,rev=0;
    while(num>0){
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    cout<<"\n Reverse a Number "<<n<<" : "<<rev;

    return 0;
}
