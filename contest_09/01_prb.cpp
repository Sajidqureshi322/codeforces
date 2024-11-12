#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // int ops = 0;
        // while (n > 0)
        // {
        //     int x = floor(log(n)/log(k));
        //     int power = floor(pow(k,x));
        //     ops += n / power;
        //     n %= power;

        // }
        if(k == 1){
            cout << n << endl;
            continue;
        }
        int ans = 0;
        while (n > 0)
        {
            ans += (n % k);
            // cout << "ans: " << ans << endl;
            n /= k;
        }
        cout << ans << endl;
        // cout << ops << endl;
    }
    return 0;
}