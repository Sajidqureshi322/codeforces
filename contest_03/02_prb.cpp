#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<-1<<endl;
            continue;
        }
 
        vector<int> a(n,-1);
        int p=1,l=0,r=n-1;
        while(l<r){
            a[l++]=p++;
            a[r--]=p++;
        }
        a[l++]=p++;
        for(int i=0;i<n;i++)
            cout<<a[i]<<" \n"[i+1==n];
 

    }
 return 0;
}