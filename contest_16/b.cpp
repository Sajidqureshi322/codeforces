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
        cin >> n>> k;

        if(n == 1){
            cout << 1 << endl;
            cout << 1 << endl;
            continue;
        }
        if(k == 1 || k == n){// as the median would always be greater than 1 and less than n
            cout << -1 << endl;
            continue;
        }

        if(k%2 == 0){
            cout << 3 << endl;
            cout << 1 << " " << k << " " << k+1 << endl;
        }
        else{
            cout << 3 << endl;
            cout << 1 << " " << k-1 << " " << k+2 << endl;
        }
    }
    return 0;
}