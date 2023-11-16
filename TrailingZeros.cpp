#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
    int n , div =5;cin>>n;
    int count =0;
     bool b =true;
 
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
   cout<<count<<endl;
 
