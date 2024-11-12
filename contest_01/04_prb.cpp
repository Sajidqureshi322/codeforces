#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }
    string s;
    cin >> s;
    long long int curSum = 0;
    for(auto &x:arr)
        curSum+=x;
 
    int l=0,r=n-1;
    long long int ans = 0;
    while(l<r){
        while(l<r&&s[l]!='L'){
            curSum-=arr[l];
            l++;
        }
        while(l<r&&s[r]!='R'){
            curSum-=arr[r];
            r--;
        }
        if(r<=l)
            break;
        // now do operation on l,r at last
        // I'm just adding this sum to my answer
        // cout << "left : " << l << " right: " << r << endl;
        ans+=curSum;
        // cout << ans << " ";
        curSum-=arr[l];
        curSum-=arr[r];
        // cout << curSum << endl;
        l++;
        r--;
    }
    cout<<ans<<endl;
   

}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 return 0;
}