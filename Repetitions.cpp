#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main(){
    int c=1, m=1;
    string s;
    cin>>s;
    int n = s.size();
        for(int i =0;i<n ;i++){
        if(s[i]==s[i+1]){
            c++;
        }else{
            m= max(m,c);
            c=1;
        }
 
        }
      cout<<m<<endl;
}
