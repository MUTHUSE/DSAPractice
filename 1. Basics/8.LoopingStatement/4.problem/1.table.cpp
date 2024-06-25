#include <bits/stdc++.h>
using namespace std;

int main()
{
    int table, limit = 10;
    cout<<"\n Enter the table you want : ";
    cin>>table;
    for(int i = 1; i<=limit;i++){
        cout<<i<<" * "<<table<<" = "<<i*table<<"\n";
    }
    return 0;
}
