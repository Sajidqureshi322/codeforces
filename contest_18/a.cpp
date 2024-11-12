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
        int n,a,b;
        cin >> n >> a >>b;
        string s;
        cin >> s;

        int x = 0,y = 0;
        bool flag = false;
        int count = 100;
        while(count--){
            for(int i = 0;i < n; i++){
                if(s[i] == 'N')
                    y++;
                else if(s[i] == 'S')
                    y--;
                else if(s[i] == 'E')
                    x++;
                else
                    x--;
                
                if(x==a && y == b){
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}