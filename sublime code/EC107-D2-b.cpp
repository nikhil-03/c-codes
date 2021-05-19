#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll bp(int a,int b)
{
   ll res=1;
   while(b>0)
   {
	 if(b&1)
	 { 
       res=res*a;
	 }
	 a=a*a;
	 b=b>>1;
   }
   return res;
}

ll gcd(int a,int b)
{
	if(b==0)return a;
	return gcd(b,a%b); 
}

void solve()
{
   ll a,b,c; cin>>a>>b>>c;
   // cout<<bp(10,c-1)<<endl;
   int x=bp(10,a-1);
   int y=bp(10,b-1)+bp(10,c-1);
   cout<<x<<" "<<y<<endl;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   }
}