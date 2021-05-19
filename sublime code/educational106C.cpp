#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back
#define MAX 1e9

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   ll n ; cin>>n;
   ll mn1=MAX,mn2=MAX;
   ll sum=0,c1=0,c2=0,ans=1e16; 
   for(int i=1;i<=n;i++)
   {
   	 ll temp; cin>>temp;
   	 sum+=temp;
   	 if(i%2){ mn1=min(mn1,temp); c1++; }
   	 else { mn2=min(mn2,temp); c2++;  }


   	 ans = min( ans , sum + mn1*(n-c1) + mn2*(n-c2) );
   }

   cout<<ans<<endl;   	
   }
   
}