#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a ,b;
        cin >> a >> b;

        if(a == 0){
            if(b&1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
            continue;
        }
        if(b == 0){
            if(a&1){
                cout <<"NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
            continue;
        }
        if((a+(b*2))&1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
 return 0;
}