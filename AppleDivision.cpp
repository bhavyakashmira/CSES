#include <bits/stdc++.h>
#define int long long
#define fr(i,j,n)  for(int i=j;i<n;i++)
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
using namespace std;
 
int32_t main(){
    int t,total=0 ;cin>>t;
 
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
        total+=v[i];
    }
 
      int mi =INT_MAX;
    
      for(int i=0;i<1<<t;i++)
	{
		int sum=0;
		fr(j,0,t)
		{
			if(i&1<<j)
				sum+=v[j];
		}
		int  diff=abs((total-sum)-sum);
		mi=min(mi,diff);
	}
 
 
           cout<<mi<<endl;
 
   
}