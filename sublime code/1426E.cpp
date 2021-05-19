#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int a,b,c,d,e,f;
   cin>>a>>b>>c>>d>>e>>f;
   long long ans=0;
   ans=min(a,e)+min(b,f)+min(c,d);
   
   long long ans2=max({0,a+e-n,b+f-n,c+d-n});
   cout<<ans2<<" "<<ans<<endl;
}