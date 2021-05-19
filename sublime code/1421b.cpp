
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
   int n; cin>>n;
   vector<string> vs(n);
   For(n)cin>>vs[i];

   if(vs[1][0]==vs[0][1] and vs[n-1][n-2]==vs[n-2][n-1] and vs[1][0]!=vs[n-1][n-2])
   { 
      cout<<"0";
   }
   else if(vs[1][0]==vs[0][1] and vs[n-1][n-2]==vs[n-2][n-1] and vs[1][0]==vs[n-1][n-2])
   {
   	  cout<<2<<endl;
   	  cout<<1<<" "<<2<<endl;
   	  cout<<2<<" "<<1;
   }
   
   else if(vs[1][0]!=vs[0][1] and vs[n-1][n-2]==vs[n-2][n-1])
   { cout<<1<<endl;

        if(vs[n-1][n-2]==vs[1][0])cout<<2<<" "<<1;
          else cout<<1<<" "<<2;

   }
   else if(vs[1][0]==vs[0][1] and vs[n-1][n-2]!=vs[n-2][n-1])
   { cout<<1<<endl; 

      if(vs[1][0]==vs[n-1][n-2])cout<<n<<" "<<n-1;
      else cout<<n-1<<" "<<n;
   }
   else if(vs[1][0]!=vs[0][1] and vs[n-1][n-2]!=vs[n-2][n-1])
   {
   	  cout<<2<<endl;
   	  if(vs[1][0]=='0')cout<<1<<" "<<2;
   	    else cout<<2<<" "<<1;
           cout<<endl;
   	  if(vs[n-1][n-2]=='1')cout<<n-1<<" "<<n;
       else cout<<n<<" "<<n-1;
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
