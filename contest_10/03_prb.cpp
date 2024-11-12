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
        for(int i = 0; i< n;i++){
            cin >> arr[i];    
        }

        sort(begin(arr),end(arr));
        int cards = 0;
        int j = 0;
        for(int i = 0;i < n; i++){
            j= max(j,i);
            while(j+1< n && abs(arr[j] - arr[j+1]) <=1 && arr[j+1]-arr[i]< k){
                j++;
            }
            cards = max(cards,j-i+1);
            // cout << "card: " << cards << " I: " << i << " J: " << j << endl;
        }
        cout << cards << endl;
      
    }
 return 0;
}