#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

int gcd(int a,int b)
{
	if(b==0)return a;
	return gcd(b,a%b);
}
int lcm(int a,int b)
{
	return (a / gcd(a,b))*b;
}

string solve()
{
   string s1,s2,a,b;
   cin>>s1>>s2;
   a=s1,b=s2;
   while(1)
   {
   	 int n=a.size(),m=b.size();
   	  if(n==m)
   	  {
   	     if(a==b) return a;
   	     else return "-1"; 
   	  } 
   	  if(n<m)
   	  {
   	  	a+=s1;
   	  }
   	  else if(n>m)
   	  {
   	  	b+=s2;
   	  }
   }
   return "-1";

   
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  cout<<solve();
   	  cout<<endl;
   }
}