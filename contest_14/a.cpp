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
        int n;
        cin >> n;
        int maxW = INT_MIN;
        int maxH = INT_MIN;
        for(int i = 0;i < n;i++){
            int w,h;
            cin >> w >> h;
            maxW = max(maxW,w);
            maxH = max(maxH,h);
        }
        cout << 2 * maxW + 2 * maxH << endl;
    }
    return 0;
}