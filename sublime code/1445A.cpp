#include <bits/stdc++.h>
using namespace std;
#define ll long long int



string fun(int x,int n,vector<ll>ar1,vector<ll>ar2 )
{
   for(int i=0;i<n;i++)
   {
   	if(ar1[i]+ar2[i]>x)return "NO";
   }
   return "YES";
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n,m;  cin>>n>>m;  
       vector<ll> ar1(n),ar2(n);

       for(ll i=0;i<n;i++){ cin>>ar1[i];  }
       for(ll i=0;i<n;i++){ cin>>ar2[i];  }	

 

       sort(ar1.begin(),ar1.end()); sort(ar2.begin(),ar2.end());
       reverse(ar2.begin(),ar2.end());

              // for(ll i=0;i<n;i++){ cout<<ar1[i];  }cout<<endl;
              // for(ll i=0;i<n;i++){ cout<<ar2[i];  }cout<<endl;

       cout<<fun(m,n,ar1,ar2)<<endl;	
 }
}