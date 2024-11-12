#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mod = 10e9+7;
int main()
{
  

    int t;
    cin >> t;
    vector<int> n(t),k1(t);
    for(int i =0;i < t; i++){
        cin >> n[i];
    }
    for(int i = 0;i < t; i++){
        cin >> k1[i];
    }
    vector<vector<
    for (int i = 0; i <= 100000; i++)
    {
        v[i][0] = 1;
        v[i][i] = 1;
        for (int k = 1; k < i; k++)
        {
            // v[i][k] = ((v[i][k - 1])%mod + (v[i - 1][k - 1])%mod)%mod;
        }
    }
    for(int i = 0; i < t; i++){
        cout << v[n[i]][k1[i]] <<  endl;
    }

    return 0;
}