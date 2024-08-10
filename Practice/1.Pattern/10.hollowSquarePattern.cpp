// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 5

 Hollow Square Pattern 
*****
*   *
*   *
*   *
*****
12345
1   5
1   5
1   5
12345
ABCDE
A   E
A   E
A   E
ABCDE
  */
class base{
    private:
        int i,j,count;
        char ch;
    public:
        void pattern(int n){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(i!=0 && i!=n-1&&j!=0&&j!=n-1){
                        cout<<" ";
                    }else{
                        cout<<"*";
                    }
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=0;i<n;i++){
                count = 1;
                for(j=0;j<n;j++){
                    if(i!=0 && i!=n-1&&j!=0&&j!=n-1){
                        cout<<" ";
                    }else{
                        cout<<count;
                    }
                    count+=1;
                }
                cout<<"\n";
            }
        }
        void patternChar(int n){
            for(i=0;i<n;i++){
                ch = 'A';
                for(j=0;j<n;j++){
                    if(i!=0 && i!=n-1&&j!=0&&j!=n-1){
                        cout<<" ";
                    }else{
                        cout<<ch;
                    }
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
    cout<<"\n Hollow Square Pattern \n";
    
    base b;
    b.pattern(n);
    b.patternNum(n);
    b.patternChar(n);
    return 0;
}
