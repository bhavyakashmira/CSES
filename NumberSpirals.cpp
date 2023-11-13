#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main(){
    int t ;
    cin>>t;
    while(t--){
        int x,y,ans;
       cin>>x>>y;
       if(x>y){
        if(x&1){
           ans = (x-1)*(x-1)  + y;
        }else{
            ans = x*x + 1-y;
        }
       }else{
        if(y&1){
            ans = y*y + +1 -x;
        }else{
            ans = (y-1)*(y-1) +x;
        }
       }
       cout<<ans<<endl;
    }
}
