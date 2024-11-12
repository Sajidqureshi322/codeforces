#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i= 0;i < n;i++)
            cin >> v[i];

        
        // cout << k << " " << v[1] << endl;
        if(k <= v[0]){
            cout << k << endl;
            continue;
        }

        long long buttons = 0;
        for(int i = 0;i < n; i++){
            int bpressed = 0;
            if(k < v[i]){
                bpressed = k;
                k = 0;
            }
            else{
                bpressed = v[i]+1;
                k -= v[i];
            }
            buttons += bpressed;
            if(k == 0) break;
        }
        cout << buttons << endl;
    }
 return 0;
}