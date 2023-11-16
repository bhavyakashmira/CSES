#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
 
int32_t main(){
   int n ;cin>>n;
    int mat[n+1];
    mat[0]=1;
    for(int i =1;i<=n;i++){
        mat[i] = (2*mat[i-1])%mod;
    }
 
    cout<<mat[n]<<endl;
}