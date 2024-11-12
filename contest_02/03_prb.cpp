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
        vector<int> arr(n);
        for(int i = 0; i < n ; i++){
            cin >> arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        for(int i = 1; i < n; i+=2){
            int diff = arr[i-1] - arr[i];
            if(k >= diff){
                arr[i] += diff;
                k -= diff;
            }
            else{
                arr[i] += k;
                break;
            }
        }
        // int ans = 0
        int ans1 = 0;
        int ans2 = 0;
        for(int i = 0; i < n; i++){
            if(i&1){
                ans1 += arr[i];
            }
            else{
                ans2 += arr[i];
            }
        }
        cout << abs(ans1-ans2)<< endl;
   
    }
 return 0;
}