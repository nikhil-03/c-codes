#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n , m;


int fun()
{
  string s1,s2;
  cin>>s1>>s2;
  int mx=0;
  n=s1.size(),m=s2.size();
  if(s1==s2)return 0;
  for(int len=1;len<=min(n,m);len++)
  {
     for(int i=0;i+len<=n;i++)
     {
     	for(int j=0;j+len<=m;j++)
     	{
     		if(s1.substr(i,len)==s2.substr(j,len))
     		{
     			mx=max(mx,len);
     		}
     	}
     }
  } 
  // cout<<mx<<endl;

  return (n+m)-2*mx;
}

int main() 
{
  int t; cin>>t;
  while(t--)
  {
  	// fun();
  	cout<<fun()<<endl;
  }

}
