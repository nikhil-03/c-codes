#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back

void solve()
{
   int n; cin>>n;
   string s1,s2; cin>>s1>>s2;
   ll c1=0,c2=0; bool flag=0;
   for(int i=0;i<n;i++)
   {
   	  if(s1[i]=='1')c1++;
   	   else c1--;
   	  if(s2[i]=='1')c2++;
   	   else c2--;

   	   if(c1!=c2 and c1!=-c2)
   	   {
   	   	flag=1; break;
   	   } 
   }
   if(flag or c1!=c2) cout<<"NO";
   else cout<<"YES";
   
   
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