#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == '1' || s[n - 1] == '1'){
            cout << "YES" << endl;
            continue;
        }

        bool two_ones = false;
        for(int i = 0;i < n;i++){
            int cnt = 0;
            while(i < n && s[i] == '1'){
                cnt++;
                i++;
            }
            if(cnt >= 2){
                two_ones = true;
                break;
            }
        }
        if(two_ones) cout <<"YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}