#include <bits/stdc++.h>
using namespace std;
/**
 * If you does not use default then the output is not satisfied
 * does not intimate you, "You're giving wrong input"
 * Ex: month 13
*/
int main()
{
    int mnt;
    cout<<"Enter a month : ";
    cin>>mnt;
    
    switch(mnt){
        case 1:
            cout<<"\n January";
            break;
        case 2:
            cout<<"\n Febraury";
            break;
        case 3:
            cout<<"\n March";
            break;
        case 4:
            cout<<"\n April";
            break;
        case 5:
            cout<<"\n May";
            break;
        case 6:
            cout<<"\n June";
            break;
        case 7:
            cout<<"\n July";
            break;
        case 8:
            cout<<"\n August";
            break;
        case 9:
            cout<<"\n September";
            break;
        case 10:
            cout<<"\n October";
            break;
        case 11:
            cout<<"\n November";
            break;
        case 12:
            cout<<"\n December";
            break;
    }
    
    return 0;
}
