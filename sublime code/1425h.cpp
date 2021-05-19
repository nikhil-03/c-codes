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
    int a,b,c,d; cin>>a>>b>>c>>d;
    int neg=a+b , pos= c+d ;

    if(neg&1)
    {
    	if(a>0 or d>0) { cout<<"Ya"<<" "; }

    	else { cout<<"Tidak"<<" "; }

    	if(b>0 or c>0){ cout<<"Ya"<<" "; }

    	else { cout<<"Tidak"<<" "; }

    	cout<<"Tidak"<<" "<<"Tidak";
    }
    else 
    {
    	cout<<"Tidak"<<" "<<"Tidak"<<" ";

    	if(b>0 or c>0) { cout<<"Ya"<<" ";}

    	else { cout<<"Tidak"<<" ";}

    	if(d>0 or a>0 ){ cout<<"Ya"<<" ";}

    	else { cout<<"Tidak"<<" ";}

    }

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
