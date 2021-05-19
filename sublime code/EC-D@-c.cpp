#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   int n,m; cin>>n>>m;
   map<int,int> mp;
   for(int i=0;i<n;i++)
   {
   	 int x; cin>>x; 
   	 if(mp[x]==0)
   	 {
   	 	mp[x]=i+1;
   	 }
   }
   for(auto a : mp)
   {
   		// cout<<a.first<<" "<<a.second<<endl;
   }
   for(int i=0;i<m;i++)
   {
   	  int x; cin>>x;
   	  cout<<mp[x]<<" ";
   	  for(auto a : mp)
      {
   		if(mp[x]>a.second)
   		mp[a.first]++;
      }
     mp[x]=1;
     // cout<<endl;
   }
  

}

int main() 
{
   solve();

}