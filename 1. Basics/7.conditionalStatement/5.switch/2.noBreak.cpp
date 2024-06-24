#include <bits/stdc++.h>
using namespace std;
/**
 * Break keyword does not use then the 
 * once the condition is true all other also print.
 * the case print until it reach break
 * Also print default
*/
int main()
{
    int mnt;
    cout<<"Enter a month : ";
    cin>>mnt;
    
    switch(mnt){
        case 1:
            cout<<"\n January";
        case 2:
            cout<<"\n Febraury";
        case 3:
            cout<<"\n March";
        case 4:
            cout<<"\n April";
        case 5:
            cout<<"\n May";
        case 6:
            cout<<"\n June";
        case 7:
            cout<<"\n July";
        case 8:
            cout<<"\n August";
        case 9:
            cout<<"\n September";
        case 10:
            cout<<"\n October";
        case 11:
            cout<<"\n November";
        case 12:
            cout<<"\n December";
        default:
            cout<<"\n Invalid month";
            break;
    }
    
    return 0;
}
