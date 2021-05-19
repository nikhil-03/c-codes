#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)



void solve()
{
   int x1,y1,z1,x2,y2,z2;
   ll ans=0;

   cin>>x1>>y1>>z1>>x2>>y2>>z2;
int z=min(z1,y2);
    z1-=z;
    y2-=z;
     ans+=2*z;

   z=min(x1,z2);
     x1-=z;
     z2-=z;

   z=min(x1,y2);
     x1-=z;
     y2-=z;
   z=min(x2,y1);
     x2-=z;
     y1-=z;  
   z=min(y1,z2);
     y1-=z;
     z2-=z;
     ans=ans-(2*z);  

     z=min(x1,x2);
     x1-=z;
     x2-=z;
     z=min(y1,y2);
     y1-=z;
     y2-=z;
     z=min(z1,z2);
     z1-=z;
     z2-=z;

     // cout<<x1<<" "<<y1<<" "<<z1<<endl;
     // cout<<x2<<" "<<y2<<" "<<z2<<endl;


   


   cout<<ans;
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
