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
        vector<int> v(n);
        long long sum = 0;
        for(int i = 0;i < n;i++){
            cin >> v[i];
            if(i < n-2) sum+=v[i];
        }
        cout << sum + v[n-1] - v[n-2] << endl;
    }
 return 0;
}