#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> ar
#define pb push_back

int solve()
{
  int n,k; cin>>n>>k;
  string s; cin>>s; int cnt=0;
  if(s[0]!='*')
  	reverse(s.begin(),s.end());
  int i=0;
  while(i<n)
  {
     if(s[i]=='*')
     {
     	s[i]='x'; cnt++;
     	int kk=i; 
     	for(int j=i+k;j>i;j--)
     	{
     		if(j<n and s[j]=='*')
     		{
     			i=j;
     			break;
     		}
     	}
     	if(kk==i)
     	{
     		i++;
     	}
     }
     else
     i++;
  }
  return cnt;
}
int main() 
{
   int t ; cin>>t;
   while(t--)
   {
   	  cout<<solve()<<endl;
   }
}