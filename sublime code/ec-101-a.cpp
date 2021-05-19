#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   string s; cin>>s;
   int n=s.size();
   if(s.size()%2==0 and s[0]!=')' and s[n-1]!='('){cout<<"YES"; return ; }
    

    else {cout<<"NO"; return ; }

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
