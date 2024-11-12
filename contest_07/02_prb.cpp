#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int ans = 0;
        if (n & 1)
        {

            for (int i = n; i > n - k; i-=2)
            {
                ans++;
            }
        }
        else{
            for(int i = n-1; i> n-k; i-=2){
                ans++;
            }
        }
        if(ans&1){
            cout << "NO" << endl;
        }
        else{
            cout <<"YES" << endl;
        }
    }
    return 0;
}