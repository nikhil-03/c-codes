#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> ar
#define pb push_back

bool pel(string s)
{
	int n=s.size(),i=0;
	while(i<n/2)
	{
		if(s[i]!=s[n-1-i])return 0;
		i++;
	}
	return 1;
}

string solve()
{
	int n,k; cin>>n>>k;
	string s; cin>>s;
	if(k==0)return "YES";
	if(n==2*k)return "NO";

	if(pel(s.substr(0,k)+s.substr(n-k,n)))  return "YES"; else return "NO"; 

	// return "YES";
}


int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	 cout<<solve()<<endl;
   }
}
