#include <bits/stdc++.h>
#define int long long 
using namespace std;
 
void solve(){
    int n,m;
    cin>>n>>m;
     if((n+m)%3==0 && 2*n>=m &&2*m>=n) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
 
}
 
signed main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
 
}
