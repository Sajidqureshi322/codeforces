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
        for(int i=0;i < n;i++)  
            cin >> arr[i];

        bool is_perfect = true;
        for(int i = 0;i <n-1;i++){
            int x = abs(arr[i]-arr[i+1]);
            if( x != 5 && x != 7 ){
                is_perfect = false;
                break;
            }
        }

        cout << ((is_perfect)?"YES":"NO") << endl;
    }
    return 0;
}