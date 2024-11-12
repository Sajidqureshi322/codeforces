#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        string s;
        s = to_string(a);
        if(s[0] == '1' && s[1] == '0' && s[s.length()-1] > '1'){
            cout << "YES" <<  endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
 return 0;
}