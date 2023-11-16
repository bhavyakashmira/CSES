#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void generate(int n ){
if(n<=0)return ;
 
vector<string>an;
an.push_back("0");
an.push_back("1");
 
int i ,j;
 
     for (i = 2; i < (1<<n); i = i<<1)
    {
        for (j = i-1 ; j >= 0 ; j--)
            an.push_back(an[j]);
 
       
        for (j = 0 ; j < i ; j++)
            an[j] = "0" + an[j];
 
        for (j = i ; j < 2*i ; j++)
            an[j] = "1" + an[j];
    }
 
    for (i = 0 ; i < an.size() ; i++ )
        cout << an[i] << endl;
}
 
int32_t main(){
    int n ;cin>>n;
    generate(n);

}