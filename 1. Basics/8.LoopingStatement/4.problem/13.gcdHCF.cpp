#include<bits/stdc++.h>
using namespace std;
/**
 * Euclidean Algorithm:
 * gcd(N1,N2) = gecd(N1-N2,N2) where N1>N2
 * gecd(a,b) = gcd(a-b,b), where a>b
*/
/**
 * Euclidean Algorithm:
 * gcd(N1,N2) = gecd(N1%N2,N2) where N1>N2
 * gecd(a,b) = gcd(a%b,b), where a>b
*/
int main(){
    int a,b;
    cout<<"\n Enter a value :";
    cin>>a;
    cout<<"\n Enter b value :";
    cin>>b;
    
    while(a>0 && b>0){
        if(a>=b){
            a = a%b;
        }else{
            int temp = b%a;
            b = a;
            a = temp;
        }
    }
    
    if(a==0){
        cout<<"\n GCD / HCF is : "<<b;
    }else{
        cout<<"\n GCD / HCF is : "<<a;
    }
    return 0;
}
