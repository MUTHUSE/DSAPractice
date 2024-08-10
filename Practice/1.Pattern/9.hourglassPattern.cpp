// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 4

 Hourglass Pattern 
*******
 *****
  ***
   *
  ***
 *****
*******
1234567
 12345
  123
   1
  123
 12345
1234567
ABCDEFG
 ABCDE
  ABC
   A
  ABC
 ABCDE
ABCDEFG
  */
class base{
    private:
        int i,j,count,star,init,end;
        char ch;
    public:
        void pattern(int n){
            for(i=0;i<(n*2)-1;i++){
                if(i>=n){
                    star = 2*(i-n+2)-1;
                    end = n-(i-n+2);
                }else{
                    star = 2*(n-i)-1;
                    end = i;
                }
                for(j=0;j<end;j++){
                    cout<<" ";
                }
                for(j=0;j<star;j++){
                    cout<<"*";
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=0;i<(n*2)-1;i++){
                if(i>=n){
                    star = 2*(i-n+2)-1;
                    end = n-(i-n+2);
                }else{
                    star = 2*(n-i)-1;
                    end = i;
                }
                for(j=0;j<end;j++){
                    cout<<" ";
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
            for(i=0;i<(n*2)-1;i++){
                if(i>=n){
                    star = 2*(i-n+2)-1;
                    end = n-(i-n+2);
                }else{
                    star = 2*(n-i)-1;
                    end = i;
                }
                for(j=0;j<end;j++){
                    cout<<" ";
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
    cout<<"\n Hourglass Pattern \n";
    
    base b;
    b.pattern(n);
    b.patternNum(n);
    b.patternChar(n);
    return 0;
}
