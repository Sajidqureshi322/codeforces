#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
void print(const vector<T>& arr) {
    for(const auto& i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        // Your logic here
        int n,k;
        cin >> n >> k;
        map<int,int>mp;

        for(int i = 0;i < k;i++){
            int a,b;
            cin>> a >> b;
            mp[a] += b;
        }
        priority_queue<int> pq;
        for(auto m:mp){
            pq.push(m.second);
        }
        int ans = 0;
        while( n > 0 && k > 0 && !pq.empty()){
            ans += pq.top();
            pq.pop();
            k--;
            n--;
        }
        cout << ans << endl;
    }
    return 0;
}