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
   vector<ll> ar(n);
   map<ll,int> m;
   for(int i=0;i<n;i++)
   {
   	  ll s; cin>>s;
   	  ar[i]=s;
   	  m[s]++;
    }	
   

  if(m.size()==2 and m[0]>0){ cout<<"YES"; return; }
  if(m.size()>3  ){ cout<<"NO"; return; }
  V aa(3);  int i=0;
   for(auto a : m)
   {
   	  aa[i++]=a.first;;
   }

  if(aa[0] xor aa[1] == aa[2]){ cout<<"YES"; return; }
  else { cout<<"NO"; return; }
   
   
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
