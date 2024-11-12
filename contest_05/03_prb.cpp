#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;

        int ans = 0;
        while(x >=0 && y >= 0){
            if(y == 0 && x == 0) break;
            if(x > 0){
                x -= z;
            }
            if(y>0){
                y-=z;
            }
            ans+=2;
        }
        cout << ans << endl;

    }
 return 0;
}