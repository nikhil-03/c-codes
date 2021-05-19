#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool dp[207];
int main() 
{
   int t; cin>>t;
   while(t--)
   {
     ll n,d; cin>>n>>d;
     memset(dp,0,sizeof(dp));
     dp[0]=1;
     if(!d)d+=10;
     ll mx=d*10;
       for(int i=0;(10*i)+d<=mx;i++)
       {
   	     for(int j=0;(10*i)+d+j<=mx;j++)
   	     {
            dp[(i*10) + d + j] = dp[(i*10) + d + j] | dp[j];
   	     }
       }
     while(n--)
     {
   	   ll q; cin>>q;
       if(q>=mx or dp[q])cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
     }
   }
}