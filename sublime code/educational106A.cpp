
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> ar
#define pb push_back


int main() 
{
    int t; cin>>t;
    while(t--)
    {
    	int n,k1,k2;  cin>>n>>k1>>k2;
        int w,b; cin>>w>>b;

        int white=k1+k2,black=2*n-white;

        // cout<<black-2*b<<" "<<white-2*w<<endl; 

        if( (black-2*b)<0 or (white-2*w)<0 )cout<<"NO"<<endl;
        else cout<<"YES"<<endl; 
    }
}
