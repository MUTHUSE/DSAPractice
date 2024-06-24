#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mnt;
    cout<<"Enter a month : ";
    cin>>mnt;
    
    switch(mnt){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"\n No of days 31";
            break;
        case 2:
            cout<<"\n No of days 28 or 29";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"\n No of days 30";
            break;
    }
    
    return 0;
}
