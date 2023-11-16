#include <bits/stdc++.h>
#define int long long 
using namespace std;
 
 void toh(int n, int from , int to , int aux ){
   
    if(n>0){
           toh(n-1,from,aux,to);
 
       cout<<from<<" "<<to<<"\n";
 
         toh(n-1,aux,to,from);
    }
 
 }
 
 
int32_t main(){
    int t;cin>>t;
    cout<<pow(2,t)-1<<endl;
    toh(t, 1, 3,2);
}
