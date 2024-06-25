#include <bits/stdc++.h>
using namespace std;
/**
 * A company insures its drivers in the following cases:
 * a. If the driver is married.
 * b. If the driver is unmarried, male & above 30 years of age.
 * c. If the driver is unmarried, Female & above 25 years of age.
*/
int main()
{
    int category;
    
    cout<<"\n 1. Married";
    cout<<"\n 2. Unmarried";
    cout<<"\n Enter your category";
    cin>>category;
    if(category == 1){
        cout<<"\n You are eligible for the insurance";
    }else if(category == 2){
        int age, gender;
        cout<<"\n Enter your age : ";
        cin>>age;
        cout<<"\n 1. Male";
        cout<<"\n 2. Female";
        cout<<"\n Enter your gender";
        cin>>gender;
        if(gender == 1 && age > 30){
            cout<<"\n You're eligible for the insurance";
        }else if(gender == 2 && age > 25){
            cout<<"\n You're eligible for the insurance";
        }else{
            cout<<"\n Invalid gender or age";
        }
    }else{
        cout<<"\n Invalid category";
    }
    return 0;
}
