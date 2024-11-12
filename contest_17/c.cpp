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
        string s;
        cin >> s;
        int q;
        cin >> q;
        int n = s.length();
        int cnt = 0;
        for(int i = 0;i < n-3;i++){
            string str = s.substr(i,4);
            if(str == "1100")
                cnt++;
        }

        while(q--){
            int i,v;
            cin >> i >> v;
            i--; 

            for(int j = i-3;j <= i; j++){
                if(j < 0 || j +3 >= n) 
                    continue;
                string str = s.substr(j,4);
                if(str == "1100")
                    cnt--;
            }
            s[i] = (v==0)?'0':'1';
            for(int j = i-3; j <= i; j++){
                if(j < 0 || j +3 >= n) 
                    continue;
                string str = s.substr(j,4);
                if(str == "1100")
                    cnt++;
            }
            if(cnt > 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
           
    }
    return 0;
}