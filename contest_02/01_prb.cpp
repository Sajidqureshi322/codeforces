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
        vector<int>arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if(n > 2){
            cout <<"NO" << endl;
        }
        else{
            int avg = (arr[0] + arr[1])/2;
            if(avg != arr[0] && avg!= arr[1]){
                // if(abs(arr[0]-arr[1]) > abs(avg-arr[0])){

                // }
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
 return 0;
}