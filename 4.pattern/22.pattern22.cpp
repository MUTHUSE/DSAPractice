#include <bits/stdc++.h>
using namespace std;
/**
----*----
---*-*---
--*-*-*--
-*-*-*-*-
*-*-*-*-*
*-*-*-*-*
-*-*-*-*-
--*-*-*--
---*-*---
----*----
*/
int main() {
    int n = 5;
    for(int i = 0; i<n;i++){
        for(int j=i;j<n-1;j++){
            cout<<"-";
        }
        int count = 0;
        for(int j = i; j < 2*i+1;j++){
            if(count%2==0){
                cout<<"*";
            }else{
                cout<<"-";
            }
            count++;
        }
        count = 0;
        for(int j = i; j > 0;j--){
            if(count%2==0){
                if(i%2==0){
                    cout<<"-";
                }else{
                    cout<<"*";
                }
            }else{
                if(i%2==0){
                    cout<<"*";
                }else{
                    cout<<"-";
                }
            }
            count++;
        }
        for(int j=i;j<n-1;j++){
            cout<<"-";
        }
        cout<<"\n";
    }
    for(int i = 0; i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"-";
        }
        int count = 0;
        for(int j = i; j < n;j++){
            if(count%2==0){
                cout<<"*";
            }else{
                cout<<"-";
            }
            count++;
        }
        count = 0;
        if(n%2==0){
            for(int j = 0; j < n-1-i;j++){
                if(count%2==0){
                    if(i%2==0){
                        cout<<"*";
                    }else{
                        cout<<"-";
                    }
                }else{
                    if(i%2==0){
                        cout<<"-";
                    }else{
                        cout<<"*";
                    }
                }
                count++;
            }
        }else{
            for(int j = 0; j < n-1-i;j++){
                if(count%2==0){
                    if(i%2==0){
                        cout<<"-";
                    }else{
                        cout<<"*";
                    }
                }else{
                    if(i%2==0){
                        cout<<"*";
                    }else{
                        cout<<"-";
                    }
                }
                count++;
            }
        }
        for(int j=0;j<i;j++){
            cout<<"-";
        }
        cout<<"\n";
    }
    return 0;
}
