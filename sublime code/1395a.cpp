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
  int r,g,b,w; cin>>r>>g>>b>>w;
 
   if(r==0 and g==0 and b==0 and w==0){ cout<<"YES"; return; }
    
  if(r>0 and g>0 and b>0)
  {
  	bool A=!(r%2);
   	bool B=!(g%2);
   	bool C=!(b%2);
   	bool D=!(w%2);
   	// cout<<A<<B<<C<<D<<endl;
   	if(A+B+C+D==3 or A+B+C+D==1 or A+B+C+D==4 or A+B+C+D==0)
     {
     	cout<<"YES";
        return ; 
     }
  }
    bool A=r%2;
   	bool B=g%2;
   	bool C=b%2;
   	bool D=w%2;
   	// cout<<A<<B<<C<<D<<endl;
   	if(A+B+C+D==1 or A+B+C+D==0)
     {
     	cout<<"YES";
        return ; 
     }
 


   cout<<"NO";
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
