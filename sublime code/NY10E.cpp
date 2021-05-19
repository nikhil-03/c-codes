#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> dp(100,10);
void solve()
{
   for(int i=1;i<=65;i++)
   {
      dp[i]=(  (dp[i-1]*(10+i)) / (i+1) );
   }	
}
int main() 
{
   solve();
   int t; cin>>t;
   while(t--)
   {
   	int a,b; cin>>a>>b;
   cout<<a<<" "<<dp[b-1]<<endl;
   }
}