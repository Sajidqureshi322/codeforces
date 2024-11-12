#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i =0; i< n ;i++){
            cin >> a[i];
        }
        for(int i = 0;i < n; i++){
            maxi = max(maxi,a[i]);
            mini = min(mini,a[i]);
        }
        // cout << maxi << " " << mini << " "<< n << endl;
        if(n == 1)
            cout << 0 << endl;
        else
            cout << ((maxi-mini) * (n-1)) << endl;
        
    }
 return 0;
}