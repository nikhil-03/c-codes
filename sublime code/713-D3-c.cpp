#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n,m; cin>>n>>m;
   string s; cin>>s;
   int len=s.length();

   for(int i=0;i<len;i++)
   {
   	 if(s[i]=='?')
   	 	s[i]=s[len-1-i];
   }

   // cout<<s<<endl;
   
   for(int i=0;i<len;i++)
   {
   	  if(s[i]-48==0)n--;
   	  else if(s[i]-48==1) m--;
   }
  // cout<<n<<" "<<m<<endl;
  int i=0;
  while(i<len/2)
  {
     int j=len-i-1;
     if(s[i]=='?')
     {
     	if(n>m){ s[i]='0'; s[j]='0'; n=n-2; }
     	else { s[i]='1'; s[j]='1'; m=m-2; }
     }
     i++;
  }
  // cout<<s<<endl;
   if(len%2!=0 and s[len/2]=='?')
   {
     if(n>0)s[len/2]='0',n--;
     else if(m>0) s[len/2]='1',m--;
   }
   // cout<<s<<endl;
   string rs=s;
   reverse(s.begin(),s.end());
   if(s==rs and m==0 and n==0)cout<<s;
   else cout<<"-1";
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