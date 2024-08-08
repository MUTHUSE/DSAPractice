// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 6

 Inverted Full Pyramid Pattern 
 ***********
  *********
   *******
    *****
     ***
      *
 1234567891011
  123456789
   1234567
    12345
     123
      1
 ABCDEFGHIJK
  ABCDEFGHI
   ABCDEFG
    ABCDE
     ABC
      A
*/
class A{
    private:
        int i,j,count;
        char ch;
    public:
        void pattern(int n){
            for(i=n-1;i>=0;i--){
                for(j=i;j<n;j++){
                    cout<<" ";
                }
                for(j=0;j<(2*i+1);j++){
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=n-1;i>=0;i--){
                for(j=i;j<n;j++){
                    cout<<" ";
                }
                count = 1;
                for(j=0;j<(2*i+1);j++){
                    cout<<count;
                    count+=1;
                }
                cout<<"\n";
            }
        }
        
        void patternChar(int n){
            for(i=n-1;i>=0;i--){
                for(j=i;j<n;j++){
                    cout<<" ";
                }
                ch = 'A';
                for(j=0;j<(2*i+1);j++){
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
    
    cout<<"\n Inverted Full Pyramid Pattern \n";
    A a;
    a.pattern(n);
    a.patternNum(n);
    a.patternChar(n);

    return 0;
}
