#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main(){
    int n;cin>>n;
     int sum=0;
     int tot = (n)*(n+1)/2;
     for(int i =1; i<n ;i++){ 
        int x;
        cin>>x;
        sum+=x;
        }
    cout<<tot-sum<<endl;
}
