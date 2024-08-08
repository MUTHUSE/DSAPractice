// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 5

 Full Pyramid Pattern 
-----*
----***
---*****
--*******
-*********
-----1
----123
---12345
--1234567
-123456789
-----A
----ABC
---ABCDE
--ABCDEFG
-ABCDEFGHI
  */
class A{
    private:
        int i,j,count;
        char ch;
    public:
        void pattern(int n){
            for(i=0;i<n;i++){
                for(j=n;j>i;j--){
                    cout<<"-";
                }
                for(j=0;j<(2*i)+1;j++){
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=0;i<n;i++){
                count = 1;
                for(j=n;j>i;j--){
                    cout<<"-";
                }
                for(j=0;j<(2*i)+1;j++){
                    cout<<count;
                    count+=1;
                }
                cout<<"\n";
            }
        }
        
        void patternChar(int n){
            for(i=0;i<n;i++){
                ch = 'A';
                for(j=n;j>i;j--){
                    cout<<"-";
                }
                for(j=0;j<(2*i)+1;j++){
                    cout<<ch;
                    ch+=1;
                }
                cout<<"\n";
            }
        }
};

int main() {
    
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    
    cout<<"\n Full Pyramid Pattern \n";
    A a;
    a.pattern(n);
    a.patternNum(n);
    a.patternChar(n);

    return 0;
}
