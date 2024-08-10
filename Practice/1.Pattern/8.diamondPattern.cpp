// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 5

 Diamond Pattern 
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *
      
     1
    123
   12345
  1234567
 123456789
  1234567
   12345
    123
     1
      
     A
    ABC
   ABCDE
  ABCDEFG
 ABCDEFGHI
  ABCDEFG
   ABCDE
    ABC
     A
  */
class base{
    private:
        int i,j,count,star,init;
        char ch;
    public:
        void pattern(int n){
            for(i=0;i<n*2;i++){
                if(i>=n){
                    star = 3*n+2-2*i;
                    init = i-n+1;
                    for(j=init;j>=0;j--){
                        cout<<" ";
                    }
                }else{
                    star = 2*i+1;
                    init = i;
                    for(j=init;j<n;j++){
                        cout<<" ";
                    }
                }
                for(j=0;j<star;j++){
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=0;i<2*n;i++){
                if(i>=n){
                    star = 3*n+2-2*i;
                    init = i-n+1;
                    for(j=init;j>=0;j--){
                        cout<<" ";
                    }
                }else{
                    star = 2*i+1;
                    init = i;
                    for(j=init;j<n;j++){
                        cout<<" ";
                    }
                }
                count = 1;
                for(j=0;j<star;j++){
                    cout<<count;
                    count+=1;
                }
                cout<<"\n";
            }
        }
        void patternChar(int n){
            for(i=0;i<2*n;i++){
                if(i>=n){
                    star = 3*n+2-2*i;
                    init = i-n+1;
                    for(j=init;j>=0;j--){
                        cout<<" ";
                    }
                }else{
                    star = 2*i+1;
                    init = i;
                    for(j=init;j<n;j++){
                        cout<<" ";
                    }
                }
                ch = 'A';
                for(j=0;j<star;j++){
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
    cout<<"\n Diamond Pattern \n";
    
    base b;
    b.pattern(n);
    b.patternNum(n);
    b.patternChar(n);
    return 0;
}
