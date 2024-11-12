#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        if (t.length() < s.length())
        {
            swap(t, s);
        }
        int i = 0;
        int j = 0;
        int time = 0;
        while (i < s.length() && s[i] == t[j])
        {
            i++;
            j++;
            time++;
        }
        if(i > 0) time++;
        time += s.length() - i;
        time += t.size() - j ;
        cout << time << endl;
    }
    return 0;
}