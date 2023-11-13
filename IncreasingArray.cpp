#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main(){
    int t,sum=0 ;
    cin>>t;
    vector<int> v(t);
    for(int i =0; i<t;i++) cin>>v[i];
    
    for(int i =0; i<t-1;i++){
        if(v[i+1]<v[i]){
            sum += (v[i]-v[i+1]);
            v[i+1] = v[i];
        }
    }
    cout<<sum<<endl;
 
}