#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   ll n; cin>>n;
   ll mul=1;
   for(int i=1;i<n;i++)
   {
   	 mul=mul*i;
   }

   cout<<mul;
}

int main() 
{
   solve();
   cout<<endl;
}

