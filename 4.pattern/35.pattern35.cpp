// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  99999999999999999
98888888888888889
98777777777777789
98766666666666789
98765555555556789
98765444444456789
98765433333456789
98765432223456789
98765432123456789
9876543222222223456789
9876543333333333456789
9876544444444444456789
9876555555555555556789
9876666666666666666789
9877777777777777777789
9888888888888888888889
9999999999999999999999
  */
int main() {
    
    int n;
    cout<<"ENter the n value : ";
    cin>>n;
    
    int new_count = n+1;
    for(int i =0; i<2*n-1;i++){
        int count = n,rule, new_rule;
        if(i>=n){
            rule = 2*n-(i+2);
            new_rule = 2*(i-n)+n-1;
            new_count++;
        }else{
            new_rule = 2*(n-i)-1;
            rule = i;
            new_count--;
        }
        for(int j = 0; j<rule;j++){
            cout<<count;
            count--;
        }
        for(int j = new_rule; j>0;j--){
            cout<<new_count;
        }
        count++;
        for(int j = 0; j<rule;j++){
            cout<<count;
            count++;
        }
        cout<<"\n";
    }

    return 0;
}
