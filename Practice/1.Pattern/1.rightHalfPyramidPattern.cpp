#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 5

 Right Half Pyramid Pattern 
*
**
***
****
*****
1
12
123
1234
12345
A
AB
ABC
ABCD
ABCDE
*/
class A{
    private:
        int i,j,count;
        char ch;
    public:
        void pattern(int n){
            for(i = 0;i<n;i++){
                for(j=0;j<=i;j++){
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        void numPattern(int n){
            for(i = 0;i<n;i++){
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
    cout<<"\n Right Half Pyramid Pattern \n";
    
    A a;
    a.pattern(n);
    a.numPattern(n);
    a.charPattern(n);

    return 0;
}
