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
   int k=n/2;
   if(n&1)
   {
   	  cout<<2*(k+1)*(k+2);
   }
   else cout<<(k+1)*(k+1);
}

int main() 
{
	
   solve();
   
}