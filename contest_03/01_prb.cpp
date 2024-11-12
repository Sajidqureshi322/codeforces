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
        vector<int> arr(n);
        for(int i =0; i <n; i++){
            cin >> arr[i];
        }
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        unordered_map<int,int>mp;
        for(int i =0; i < n; i++){
            mp[arr[i]]++;
        }
        int maxi = INT_MIN;
        for(auto m:mp){
            maxi = max(maxi,m.second);
        }
        cout << (n-maxi) << endl;

    }
 return 0;
}