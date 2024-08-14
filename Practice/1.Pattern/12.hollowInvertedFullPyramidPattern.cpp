// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 5

 Hollow Inverted Full Pyramid Pattern 
*********
 *     *
  *   *
   * *
    *
123456789
 1     7
  1   5
   1 3
    1
ABCDEFGHI
 A     G
  A   E
   A C
    A
  */
class base{
    private:
        int i,j,count;
        char ch;
    public:
        void pattern(int n){
            for(i=n-1;i>=0;i--){
                for(j=i;j<n-1;j++){
                    cout<<" ";
                }
                for(j=0;j<(2*i)+1;j++){
                    if(j==0 || i == 0 || i == n-1 || j == (2*i)){
                        cout<<"*";
                    }else{
                        cout<<" ";
                    }
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=n-1;i>=0;i--){
                count = 1;
                for(j=i;j<n-1;j++){
                    cout<<" ";
                }
                for(j=0;j<(2*i)+1;j++){
                    if(j==0 || i == 0 || i == n-1 || j == (2*i)){
                        cout<<count;
                    }else{
                        cout<<" ";
                    }
                    count++;
                }
                cout<<"\n";
            }
        }
        void patternChar(int n){
            for(i=n-1;i>=0;i--){
                ch = 'A';
                for(j=i;j<n-1;j++){
                    cout<<" ";
                }
                for(j=0;j<(2*i)+1;j++){
                    if(j==0 || i == 0 || i == n-1 || j == (2*i)){
                        cout<<ch;
                    }else{
                        cout<<" ";
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
    cout<<"\n Hollow Inverted Full Pyramid Pattern \n";
    
    base B;
    B.pattern(n);
    B.patternNum(n);
    B.patternChar(n);

    return 0;
}
