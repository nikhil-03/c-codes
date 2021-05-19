#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
	ll a,b,A,B,res,ans,i;
	cin>>A>>B;
    if(!A){cout<<0<<endl;  return; }
    res=A+3;
    for(i=(B<2?2-B:0) ; i<res ; i++)
    {
    	b=B+i;
    	a=A;
    	ans=i;
    	while(a)
    	{
    		a=a/b; ++ans;
    	}
    	if(ans<res)res=ans;
    }
    cout<<res<<endl;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       solve();	
   }
}