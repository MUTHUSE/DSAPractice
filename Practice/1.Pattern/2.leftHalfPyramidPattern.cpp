#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 6

 Left Half Pyramid Pattern 
     *
    **
   ***
  ****
 *****
******
     1
    12
   123
  1234
 12345
123456
     A
    AB
   ABC
  ABCD
 ABCDE
ABCDEF
*/
class A{
    private:
        int i,j,count;
        char ch;
    public:
        void pattern(int n){
            for(i = 0;i<n;i++){
                for(j=i;j<n-1;j++){
                    cout<<" ";
                }
                for(j=0;j<=i;j++){
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        void numPattern(int n){
            for(i = 0;i<n;i++){
                for(j=i;j<n-1;j++){
                    cout<<" ";
                }
                count = 1;
                for(j=0;j<=i;j++){
                    cout<<count;
                    count+=1;
                }
                cout<<"\n";
            }
        }
        void charPattern(int n){
            for(i = 0;i<n;i++){
                for(j=i;j<n-1;j++){
                    cout<<" ";
                }
                ch = 'A';
                for(j=0;j<=i;j++){
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
    cout<<"\n Left Half Pyramid Pattern \n";
    
    A a;
    a.pattern(n);
    a.numPattern(n);
    a.charPattern(n);

    return 0;
}
