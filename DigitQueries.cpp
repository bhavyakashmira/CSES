#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int power(int base , int power ){
     int ans = 1;
     while(power--){
        ans *=base;
     }
     return ans;
}
 
 void solve(){
      int n ;cin>>n;
 
  
    int k=1,sum=0;
 
     do{
        sum += 9*k*power(10,k-1);
        k++;
     }while(sum<=n);
     k--;
     
     int di = (sum-n)/k;
     int re = (sum-n)%k;
     int an = (power(10, k)-1)-di;
  
     string res = to_string(an);
 
      cout<<res[res.length()-1-re]<<endl;
  
 
 }
 
 
 
 int32_t main(){
 
  int t ;
  cin>>t;
 
  while(t--){
   solve();
  }
 }