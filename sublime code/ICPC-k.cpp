#include<bits/stdc++.h>
using namespace std;
int n;
int p[2001],q[2001];
 
int main() 
{
  cin >> n;
  for(int i=1;i<=2*n;i++) cin >> p[i];
  for(int i=1;i<=2*n;i++) q[i] = p[i];
  int ans = 20 * n;
  for(int t = 0;t <= 1;t++) 
  {
    int IT = t;
    for(int i = 1;i<=2*n;i++) p[i] = q[i];
    for(int i=0;i< 20*n;i++) 
    {
      bool ok = 1;
      for(int j=1;j<=2*n;j++) 
      ok &= (p[j] == j);
      if(ok) 
      {
        ans = min(ans,i);
        break;
      }
      if(IT == 0) 
      {
        for(int j =1;j<=2*n;j+=2) swap(p[j],p[j+1]);
      }
      else 
      {
        for(int j=1;j<=n;j++) swap(p[j],p[n+j]);
      }
      IT^=1;
    }
  }
  if(ans == 20*n) ans = -1;
  cout << ans;
}
