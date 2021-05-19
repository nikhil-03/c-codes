#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int fun(ll n,string s)
{
  if(n%2==0)
  {
    for(int i=0;i<n;i++)
    {
     	if((s[i]-'0')%2==0 and (i+1)%2==0)
  		return 2;
    }
   return 1;
  }	

   if(n%2!=0)
   {
   	for(int i=0;i<n;i++)
  	if((s[i]-'0')%2!=0 and (i+1)%2!=0)
  		return 1;
  	 return 2;
   }
  
  return 0;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n; string x;  cin>>n>>x;

       // vector<ll> ar(n);
       cout<<fun(n,x)<<endl;
   }
}


// 		scanf("%d%s",&n,s);
// 		if(n&1) 
// 		{
// 			int ans=2;
// 			for(int i=0;i<n;i+=2) 
// 				if(s[i]%2==1) ans=1;
// 			printf("%d\n",ans);
// 		}
// 		else 
// 		{
// 			int ans=1;
// 			for(int i=1;i<n;i+=2) 
// 				if(s[i]%2==0) ans=2;
// 			printf("%d\n",ans);
// 		}
// 	}
//  	return 0;
// }