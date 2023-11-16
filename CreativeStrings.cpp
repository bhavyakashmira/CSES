#include <bits/stdc++.h>
#define int long long
#define fr(i,j,n)  for(int i=j;i<n;i++)
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
using namespace std;
int prime[1000001];
int fact[1000001];
int inv[1000001];
const int mod = 1e9+7;
 
void solve(string s){
      srt(s);
	string check=s;
	vector<string> v;
	v.push_back(s);
	while(1)
	{
		next_permutation(s.begin(),s.end());
		if(s==check)
			break;
		else
			v.push_back(s);
	}
	cout<<v.size()<<endl;
	for(auto s:v)
		cout<<s<<endl;
 
    
}
int32_t main(){
  string s;cin>>s;
  solve(s);   
}