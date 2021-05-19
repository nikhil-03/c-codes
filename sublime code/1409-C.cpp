#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n,x,y,N;  cin>>n>>x>>y;
       N=n;
       ll diff,td=y-x;
       int k=0;
       while(td%(n-1)!=0)
       {
       	  n--;
       }
       diff=td/(n-1);
       if(n==N)
       {
       	  for(int i=0;i<n;i++)
       	  {
       	  	cout<<x<<" "; x+=diff;
       	  }
       	  cout<<endl;
       }
      else
       {
       	  for(int i=0;i<n;i++)
       	  {
       	  	 cout<<x+(diff*i)<<" ";
       	  	 k++;
       	  }

       	  while(x-diff>0 and k<N)
       	  {
       	  	cout<<x-diff<<" ";
       	  	x=x-diff; k++;
       	  }
       	  while(k<N)
       	  {
       	  	cout<<y+diff<<" ";
       	  	y=y+diff; k++;
       	  }
       	  cout<<endl;
       }
   }
}