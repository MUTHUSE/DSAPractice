#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter the number : ";
    cin>>n;
    
    cout<<"\n Digit Extraction of "<<n<<" : ";
    int num = n;
    int rem;
    while(num>0){
        rem = num%10;
        cout<<rem<<" ";
        num = num/10;
    }

    return 0;
}
