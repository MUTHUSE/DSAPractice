#include <bits/stdc++.h>
using namespace std;
/**
 * If his basic salary is less than Rs.1500,
 * then HRA = 10% of basic salary and 
 * DA = 90% of basic salary.
 * If his salary is either equal to or above Rs.1500,
 * then HRA = Rs.500 and DA = 98% of basic salary.
 * If the employee's salary is input through the keyboard
 * write a program to find his gross salary.
*/
int main()
{
    float salary, hra, da, gs;
    cout<<"Enter the employee salary : ";
    cin>>salary;
    if(salary<1500){
        hra = (salary*10)/100;
        da = (salary*90)/100;
    }else{
        hra = 500;
        da = (salary*98)/100;
    }
    gs = salary + hra + da;
    cout<<"\n Gross salary of the employee : "<<gs;
    
    return 0;
}
