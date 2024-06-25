#include <bits/stdc++.h>
using namespace std;
/**
 * A library charges a fine for every book returned look.
 * For first 5 days the fine is 50 paise,
 * for 6-10 days fine is one rupees.
 * and above 10 days fine is 5 rupees 
 * If you return the book after 30 days your membership will be cancelled.
 * Write a program is late to return 
 * the numberof days the member is late to returnthe book and display the fine or the approprite message.
*/
int main()
{
    int days;
    
    cout<<"\n Enter the days you're return : ";
    cin>>days;
    if(days == 5){
        cout<<"\n The fine is 50 paise";
    }else if(6 <= days && days <= 10){
        cout<<"\n The fine is one rupees";
    }else if(10<days && days < 30){
        cout<<"\n The fine is 5 rupees";
    }else{
        cout<<"\n Your membership will be cancelled";
    }
    return 0;
}
