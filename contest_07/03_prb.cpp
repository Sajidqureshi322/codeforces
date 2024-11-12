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
        vector<long long> arr(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (n <= 2)
        {
            cout << -1 << endl;
            continue;
        }
        sort(arr.begin(), arr.end());
        int req = (n)/2;  // minimum threshold which needs to be passed

        cout << max(0ll ,2 * n * arr[req] - sum + 1) << endl;
    }
    return 0;
}