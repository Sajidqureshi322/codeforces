#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int zeros = 0;
        for(int i =0; i< n;i++){
            if(s[i] == '1') count++;
            if(s[i] == '0') zeros++;
        }
        if(count%4 == 0 && count + zeros == n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 return 0;
}