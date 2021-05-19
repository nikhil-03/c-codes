#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back

void solve()
{
  int n; cin>>n;
   V x(5000005),y(5000005),ar(n+5); 
  for(int i=1;i<=n;i++)
  {  cin>>ar[i];  }

  for(int i=1;i<=n;i++)
  {
  	for(int j=i+1;j<=n;j++)
  	{
  		int s=ar[i]+ar[j];
  		if(x[s] and y[s] and x[s]!=i and y[s]!=i and x[s]!=j and y[s]!=j)
        {
        	cout<<"YES"<<endl;
        	cout<<x[s]<<" "<<y[s]<<" "<<i<<" "<<j<<endl;
        	return;
        }
        x[s]=i;
        y[s]=j;
  	}
  	
  }
   cout<<"NO"<<endl;


}


int main() 
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);	 
  solve(); 
  return 0; 
}