#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;

        if(a >= b){
            cout << a << endl;
            continue;
        }
        
        while(a>=1 && a < b){
            int left = b-a;
            int deduct = (left+1)/2;
            a -= deduct;
            b -= 2 * deduct;
            // cout << a << " " << b << endl;
        }

        if(a <= 0)
            cout << 0 << endl;
        else
            cout << a << endl;

   }
 return 0;
}