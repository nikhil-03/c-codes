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
 	string s; cin>>s;
 	int i=s.find("11");
 	int j=s.rfind("00");

 	if(i!=-1 and j!=-1 and i<j)cout<<"NO"<<endl;
 	else cout<<"YES"<<endl;
 } 
}