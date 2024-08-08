// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 8

 Inverted Left Half Pyramid Pattern 
********
 *******
  ******
   *****
    ****
     ***
      **
       *
12345678
 1234567
  123456
   12345
    1234
     123
      12
       1
ABCDEFGH
 ABCDEFG
  ABCDEF
   ABCDE
    ABCD
     ABC
      AB
       A
  */
class A{
    private:
        int i,j,count;
        char ch;
    public:
        void pattern(int n){
            for(i=0;i<n;i++){
                for(j=0;j<i;j++){
                    cout<<" ";
                }
                for(j=n;j>i;j--){
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=0;i<n;i++){
                for(j=0;j<i;j++){
                    cout<<" ";
                }
                count = 1;
                for(j=n;j>i;j--){
                    cout<<count;
                    count+=1;
                }
                cout<<"\n";
            }
        }
        
        void patternChar(int n){
            for(i=0;i<n;i++){
                for(j=0;j<i;j++){
                    cout<<" ";
                }
                ch = 'A';
                for(j=n;j>i;j--){
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
    
    cout<<"\n Inverted Left Half Pyramid Pattern \n";
    A a;
    a.pattern(n);
    a.patternNum(n);
    a.patternChar(n);

    return 0;
}
