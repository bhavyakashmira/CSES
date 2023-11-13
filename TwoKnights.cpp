#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void solve(int i){
     int ans = (i*i)*(i*i-1)/2 - 4*(i-1)*(i-2);
    cout<<ans<<endl;
}
 
int32_t main(){
    int n;cin>>n;
    int i=1;
    while(i<=n){
        solve(i);
        i++;
    }
}