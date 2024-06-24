#include <bits/stdc++.h>
using namespace std;
/**
 * age >= 18
 *  Male: Room 5
 *  Female: Room 6
 * Not eligible
*/
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age >= 18){
        int category;
        cout<<"\n 1.Male";
        cout<<"\n 2.Female";
        cout<<"\n Choose the gender : ";
        cin>>category;
        if(category == 1){
            cout<<"\n Room 5";
        }else if(category == 2){
            cout<<"\n Room 6";
        }else{
            cout<<"\n Invalid Gender";
        }
    }else{
        cout<<"\n Not eligible";
    }
    
    return 0;
}
