#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)



void solve()
{
   int r,c;
  cin>>r>>c;
  int sr,sc;
  cin>>sr>>sc;
  sr--;
  sc--;
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cout<<(sr+i)%r+1<<" "<<(sc+j)%c+1<<endl;
    }
    sc--;
    if(sc<0) sc+=c;
  }

}

int main() 
{
   solve();
}
