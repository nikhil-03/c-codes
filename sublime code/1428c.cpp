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
    string s; cin>>s;
    int n=s.size(); int i=0;
    stack<char> st;
    for(int i=0;i<n;i++)
    {
    	char c=s[i];
       if(st.empty())
       {
       	  st.push(c);
       }
       else if(st.top()=='A' and c=='B')st.pop();
       else if(st.top()=='B' and c=='B')st.pop();
       else st.push(c);
    }
    cout<<st.size();
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
