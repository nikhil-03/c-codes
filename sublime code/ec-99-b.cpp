#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

ll dp[5050];

int solve()
{
   ll x; cin>>x; ll cnt=0;
   while(cnt*(cnt+1) < 2*x)
   {
   	  cnt++;
   }
   if(cnt*(cnt+1) / 2 == x+1)cnt++; 
   return cnt;

}

int main() 
{
   int t; cin>>t;
    
   while(t--)
   {
   	 cout<< solve()<<endl<<endl;
   }
}