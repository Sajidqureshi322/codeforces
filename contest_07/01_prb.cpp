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
        int sum = 0;
        int countZ = 0;
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }
        for(int i = 0;i < n; i++){
            if(arr[i] == 0 && sum > 0){
                countZ++;
                sum--;
            }
            if(arr[i] >= k){
                sum += arr[i];
            }
        }
        cout << countZ << endl;
    }
 return 0;
}