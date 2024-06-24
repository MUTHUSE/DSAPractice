#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,char> p;

    p=make_pair(1,'a');
    int a;
    char b;
    tie(a,b)=p;
    cout<<"\n"<<a<<" "<<b;

    pair<int,pair<int,int>>p2;
    p2={1,{2,3}};
    int x,y, z;
    tie(x,ignore)=p2;
    tie(y,z) = p2.second;
    cout<<"\n"<<x<<" "<<y<<" "<<z<<"\n";

    pair<int,char> p1(p);
    cout<<p1.second<<" hi";
    return 0;
}
