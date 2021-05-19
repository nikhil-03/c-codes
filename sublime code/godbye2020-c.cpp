#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back



void solve()
{
   string s;  cin>>s;
   int n=s.length();
   bool vis[n]={0};
   int ans=0;
   for(int i=1;i<n;i++)
   {
   	  bool todo=0;
      if(s[i]==s[i-1] and !vis[i-1])
      	todo=1;
      if(i>1 and s[i]==s[i-2] and !vis[i-2])
      	todo=1;

      vis[i]=todo;
      ans+=vis[i];
   }
   // for(auto a : vis) cout<<a<<" ";
   cout<<ans;
   
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
