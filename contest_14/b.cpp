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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i= 0;i < n;i++){
            cin >> arr[i];
        }
        int ans = n;
        for(int i = 0;i < n;i++){
            int count = 0;
            for(int j = i+1;j < n; j++){
                if(arr[i] < arr[j])
                    count++;
            }
            
            ans = min(ans,count + i);
        }
        cout << ans << endl;

    }
    return 0;
}