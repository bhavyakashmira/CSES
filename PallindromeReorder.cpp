#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int vis=1,c1=0;
    bool an =true;
    string s,ans,c;
    cin>>s;
    map<char, int>map;
    for(int i =0; i<s.size();i++){
        char ch =s[i];
        map[ch]++;
    }
 
    for(auto it : map){
        if(it.second%2==0){
            for(int i =0;i<it.second/2;i++){
           ans += it.first;
            }
        }else if(it.second%2!=0 && vis==1){
             for(int i =0;i<it.second/2;i++){
           ans += it.first;
            }
            c +=it.first;
            vis++;
            }
         if(it.second%2!=0){
            c1++;
            if(c1>=2){
              break;
            }
         }
 
    } 
     
    s=ans;
    reverse(s.begin(), s.end());
     
   if(c1<2){
    cout<<ans<<c<<s<<endl;
   }else{
    cout<<"NO SOLUTION";
   }
}