#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;
        
        int l = max(l1,l2), r = min(r1,r2);
        if(r < l){
            cout << 1 << endl;
            continue;
        }

        int ans = r - l;
        if(l1< l || l2 < l)
            ans++;
        if(r1 > r || r2 > r )
            ans++;

        cout << ans << endl;
    }
 return 0;
}