#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   int a,b,c; cin>>a>>b>>c;
   if(a==0 or b==0 or c==0)cout<<"NO";
   int k=a+b+c-3;
   if((k+1)%7==0)cout<<"YES";
   else cout<<"NO";
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