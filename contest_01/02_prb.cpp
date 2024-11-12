#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        vector<int> temp(n,0);
        for(int i = 0; i< n; i++){
            cin >> v[i];
        }
        bool flag = false;
        for(int i = 0;i < n; i++){
            int index =v[i]-1;
            if(i==0){
                temp[index] = -1;
                continue;
            }
            if((index + 1>=n && index-1>=0 && temp[index-1] == 0)||
                (index-1 <0 && temp[index+1] == 0)||
                (index+1 <n && index-1 >=0 && temp[index+1] == 0 && temp[index-1] == 0)){
                    cout << "No" << endl;
                    flag = true;
                    break;
            }
            temp[index] = -1;
        }
        if(flag == false){
            cout << "Yes" << endl;
        }
    }
 return 0;
}