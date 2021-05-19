#include<bits/stdc++.h>
using namespace std;
int T,n,k;
long long ans,s,x;
int main()
{
  scanf("%d",&T);
  while(T--)
  {
    scanf("%d%d",&n,&k);
    s=ans=0;
    for(int i=1;i<=n;i++)
    {
      scanf("%lld",&x);
      if(i>1)
      {
        ans=max(ans,(100*x-1)/k+1-s);
        // cout<<(100*x-1)/k+1-s<<" ";
      }
      s+=x;
    }
    printf("%lld\n",ans);
    // cout<<endl;
  }
}