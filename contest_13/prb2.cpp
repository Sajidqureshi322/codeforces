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
        vector<vector<int>> arr(n,vector<int>(n));
        for(int i = 0; i < n;i++){
            for(int j= 0;j  < n;j++)
                cin >> arr[i][j];
        }
        int ans = 0;
        for(int i = 0 ;i < n;i++){
            for(int j = 0;j < n ;j++){
                if(arr[i][j] < 0){
                    int ops = INT_MAX; 
                    int row = i,col = j;
                    while(row < n && col < n){
                        if(arr[row][col] < 0){
                            ops = min(ops,arr[row][col]); 
                            arr[row][col] = 1;
                        }
                        row++;
                        col++;
                    }
                    // cout << "ops : " << ops << endl;
                    ans += abs(ops);
                    // cout << "ans : " << ans << endl;
                } 
            }
        }
        cout << ans << endl;
    }
 return 0;
}