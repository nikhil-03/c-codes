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
  int n;
   string a,b;

   cin >> n >> a >> b;
        vector<int> ops;
        for(int i = 0; i < n; i++)
         {
            if(a[i] != b[i]) 
            {
                if(i > 0) ops.push_back(i + 1);

                ops.push_back(1);
                
                if(i > 0) ops.push_back(i + 1);
            }
        }
        cout << ops.size() << ' ';
        for(int x : ops) {
            cout << x << ' ';
        }
        

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
