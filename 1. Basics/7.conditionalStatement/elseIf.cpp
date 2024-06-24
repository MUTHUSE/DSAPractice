#include <bits/stdc++.h>
using namespace std;
/**
 * A certain grade of steel is graded according to the following condition.
 * 1. Hardness must be greater than 50.
 * 2. Carbon must be less than 0.7.
 * 3. Tensile strength must be greater than 5600.
 * The grades are as follows:
 * a. Grade 10, if all three conditions are met.
 * b. Grade 9, if condition 1 and 2 are met.
 * c. Grade 8, if condition 2 and 3 are met.
 * d. Grade 7, if condition 1 and 3 are met.
 * e. Grade 6, if only on condition is met.
 * f. Grade 5, if none of the conditions are met.
*/
int main()
{
    int hardness, tensile;
    float carbon;
    cout<<"Enter the Hardness, Carbon and Tensile : ";
    cin>>hardness>>carbon>>tensile;
    if(hardness>50 && carbon<0.7 && tensile>5600){
        cout<<"\n Grade 10.";
    }else if(hardness>50 && carbon<0.7){
        cout<<"\n Grade 9.";
    }else if(carbon<0.7 && tensile>5600){
        cout<<"\n Grade 8.";
    }else if(hardness>50 && tensile>5600){
        cout<<"\n Grade 7.";
    }else if(hardness>50 || carbon<0.7 || tensile>5600){
        cout<<"\n Grade 6.";
    }else{
        cout<<"\n Grade 5.";
    }
    return 0;
}
