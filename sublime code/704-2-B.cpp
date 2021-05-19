#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back

void solve()
{
   int n; cin>>n;
   V ar(n),ar2(n);  int ind=n-1;
   int nn=n;
   bool vis[n]={0};
   unordered_map<int,int> m;
   for(int i=0;i<n;i++)
   {
   	  cin>>ar[i];  
   	  m[ar[i]]=i;
   	  ar2[i]=ar[i];
   }
   
   sort(ar.begin(),ar.end());
   ll ans = 0;

   while(ind>=0)
   {
   	  for(int i=m[ar[ind]];i<n;i++)
   	  {
   	  	if(vis[i])break;
   	  	cout<<ar2[i]<<" ";
         vis[i]=1;
   	  }
   	  ind--;
   }
   cout<<endl;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   }
}