#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }
        int count = 0;
        int score = 0;
        int maxi = INT_MIN;
        for(int i = 0;i <  n; i+=2){
            count++;
            maxi = max(arr[i],maxi);
        }
        score = count + maxi;
        count = 0;
        maxi = INT_MIN;
        for(int i = 1; i< n; i+=2){
            count++;
            maxi = max(arr[i],maxi);
        }
        // cout << maxi <<" " << score << endl;
        cout << max(maxi+count,score) << endl;

    }
 return 0;
}