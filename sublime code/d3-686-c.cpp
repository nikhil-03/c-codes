#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   int n; cin>>n;
   stack<ll> s; unordered_map<ll,ll> m;
   V ar(n);
   for(int i=0;i<n;i++)
   {
   	 ll x; cin>>x;
   	 if(s.empty() or s.top()!=x)
   	 {
   	 	s.push(x);
   	 }
   }
   n=s.size();  int i=0;
   ll mx=10e9;
   while(!s.empty())
   {
   	  // cout<<s.top()<<" ";
   	  ar[i++]=s.top();
   	  m[s.top()]++;
   	  s.pop();
   }
   m[ar[0]]--;  m[ar[n-1]]--;

   for(auto a : m) //cout<<a.first<<" "<<a.second<<endl;
   {
   	  mx=min(mx,a.second);
   }

   cout<<mx+1;
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
