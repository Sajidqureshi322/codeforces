#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void print(const vector<T> &arr)
{
    for (const auto &i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Your logic here
        int n;
        cin >> n;

        int ones = 0, zeros = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            int a;
            cin >> a;
            if (a == 1)
                ones++;
            else
                zeros++;
        }
        int mini = 0, maxi = 0;
        if (ones <= n)
        {
            maxi = ones;
            if (ones & 1)
                mini = 1;
        }
        else
        {
            if (ones != 2 * n)
            {
                maxi = zeros;
                if (ones & 1)
                    mini = 1;
            }
        }
        cout << mini << " " << maxi << endl;
    }
    return 0;
}