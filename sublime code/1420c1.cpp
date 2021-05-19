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
    ll n,q; cin>>n>>q;
    V a(n); for(int i=0;i<n;i++)cin>>a[i];
    ll curr=a[0];
        ll total=0;
        int flip=0;
        for(int i=1;i<n;i++)
        {
            if(flip==0){
                if(a[i]>a[i-1])
                    curr=a[i];
                else{
                    total+=a[i-1];
                    // curr=a[i];
                    flip=1;
                }
            }
            else{
                if(a[i]<a[i-1])
                    curr=a[i];
                else{
                    total-=a[i-1];
                    // curr=a[i];
                    flip=0;
                }
            }
        }
        if(flip==0)
            total+=a[n-1];
        cout<<total;

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
