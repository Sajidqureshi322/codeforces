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
        vector<int> arr(n);
        for(int i = 0; i<  n; i++){
            cin >> arr[i];
        }
        int m;
        cin >> m;
        vector<string> str(m);
        for(int i = 0; i< m; i++){
            cin >> str[i];
        }
        // bool flag = false;

        for(int i = 0;i < m; i++){
            string s = str[i];
            // if(s.length()!=n){
            //     continue;
            // }
            unordered_map<int,char>mp1;
            unordered_map<char,int>mp2;
            string s1 = "";
            for(int j = 0; j< n; j++){
                s1 += to_string(arr[j]);
                int num = arr[j];
                char ch = s[j];
                mp1[num] = ch;
                mp2[ch] = num;
            }
            string s2="",s3="";
            for(int j = 0; j< n; j++){
                int num = arr[j];
                char ch = s[j];
                s3 += mp1[num];
                s2 += to_string(mp2[ch]);
            }
            // cout << s1 << " " << s2 <<" " << s3 <<" "<< s << endl;
            if(s1 == s2 && s3 == s){
                cout <<"YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }

        }

    }
 return 0;
}