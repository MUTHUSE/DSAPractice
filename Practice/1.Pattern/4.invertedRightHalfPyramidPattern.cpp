// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 5

 Inverted Right Half Pyramid Pattern 
*****
****
***
**
*
12345
1234
123
12
1
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
                for(j=n;j>i;j--){
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=0;i<n;i++){
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
    
    cout<<"\n Inverted Right Half Pyramid Pattern \n";
    A a;
    a.pattern(n);
    a.patternNum(n);
    a.patternChar(n);

    return 0;
}
