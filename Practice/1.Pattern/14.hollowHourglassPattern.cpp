// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 5

 Hollow Hourglass Pattern 
*********
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*********
123456789
 1     7
  1   5
   1 3
    1
   1 3
  1   5
 1     7
123456789
ABCDEFGHI
 A     G
  A   E
   A C
    A
   A C
  A   E
 A     G
ABCDEFGHI
  */
class base{
    private:
        int i,j,count,start,j_start,end;
        char ch;
    public:
        void pattern(int n){
            for(i=0;i<(2*n)-1;i++){
                if(i>=n){
                    j_start = 2*n-2-i;
                    start = i-n+1;
                    end = (2*(i-n))+3;
                }else{
                    j_start = i;
                    start = n-1;
                    end = 2*(n-i)-1;
                }
                for(j=0;j<j_start;j++){
                    cout<<" ";
                }
                for(j=0;j<end;j++){
                    if(i==0 || j==0 || j == end - 1 || i == 2*n-2){
                        cout<<"*";
                    }else{
                        cout<<" ";
                    }
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=0;i<(2*n)-1;i++){
                count = 1;
                if(i>=n){
                    j_start = 2*n-2-i;
                    start = i-n+1;
                    end = (2*(i-n))+3;
                }else{
                    j_start = i;
                    start = n-1;
                    end = 2*(n-i)-1;
                }
                for(j=0;j<j_start;j++){
                    cout<<" ";
                }
                for(j=0;j<end;j++){
                    if(i==0 || j==0 || j == end - 1 || i == 2*n-2){
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
            for(i=0;i<(2*n)-1;i++){
                ch = 'A';
                if(i>=n){
                    j_start = 2*n-2-i;
                    start = i-n+1;
                    end = (2*(i-n))+3;
                }else{
                    j_start = i;
                    start = n-1;
                    end = 2*(n-i)-1;
                }
                for(j=0;j<j_start;j++){
                    cout<<" ";
                }
                for(j=0;j<end;j++){
                    if(i==0 || j==0 || j == end - 1 || i == 2*n-2){
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
    cout<<"\n Hollow Hourglass Pattern \n";
    
    base B;
    B.pattern(n);
    B.patternNum(n);
    B.patternChar(n);

    return 0;
}
