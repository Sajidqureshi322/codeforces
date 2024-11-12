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
        // Your logic here3
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++)
            cin >> arr[i];

        sort(begin(arr),end(arr));
        int max_len = INT_MAX;
        int l = 0;
        for(int r = 2; r < n; r++){
            while(r-l >= 2 && arr[l] + arr[l+1] <= arr[r])
                l++;
            
            max_len = min(max_len,n-(r-l+1));
        }
        cout << max_len << endl;

    }
    return 0;
}