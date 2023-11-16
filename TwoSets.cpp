#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
    int n,c=-1,b=0;cin>>n;
    int sum = n*(n+1)/2;
     if(sum%2!=0){
        cout<<"NO"<<endl;
     }else{
         cout << "YES" << endl;
         vector<int> v1, v2;
         if(n&1){
            v1.push_back(1);
            int left = 2, right = n;
            int k = 0;
            while(left!=ceil(n/2.00)){
               if(k%2==0){
                  v1.push_back(left);
                  v1.push_back(right);
               } else {
                  v2.push_back(left);
                  v2.push_back(right);
               }
               k++;
               left++, right--;
            }
            v1.push_back(left);
            v2.push_back(right);
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
         } else {
            int left = 1, right = n, k = 0;
            while(left<right){
               if(k%2) {
                  v1.push_back(left);
                  v1.push_back(right); 
               } else {
                  v2.push_back(left);
                  v2.push_back(right);
               }
               left++, right--, k++;
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());   
         }
         cout << v1.size() << endl;
            for(auto x: v1) cout << x << ' ';
            cout << endl;
            cout << v2.size() << endl;
            for(auto x: v2) cout << x << ' ';
            cout << endl;
     }
}