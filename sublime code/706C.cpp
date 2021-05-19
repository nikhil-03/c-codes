#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> ar
#define pb push_back


int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	 double ans=0;
   	 int n;   cin>>n;  
   	 vector<int> x(100005,INT_MAX),y(100005,INT_MAX);
   	 int c1=0,c2=0;
   	 for(int i=0;i<2*n;i++)
   	 {
        int aa,ab; cin>>aa>>ab;
        if(aa==0)y[c1++]=abs(ab);
            else x[c2++]=abs(aa);
   	 }
   	  sort(x.begin(),x.end());
   	  sort(y.begin(),y.end());
    
      for(int i=0;i<n;i++)
      {
      	ans += sqrt( 1.0*x[i]*x[i] + 1.0*y[i]*y[i] );
      } 
     printf("%.15lf\n",ans);
   }
}
