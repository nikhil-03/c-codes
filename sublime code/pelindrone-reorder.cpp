#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
   string s; cin>>s;
   int n=s.length(),c=0; char ch;
   unordered_map<char,int> m;
   for(int i=0;i<n;i++)
   {
   	 m[s[i]]++;
   }
    
   for(auto a=m.begin();a!=m.end();a++)
   {
   	  if(a->second%2!=0){c++; ch=a->first; }
   }
    if(n&1 and c!=1){ cout<<"NO SOLUTION"; return 0;}
    if(n%2==0 and c>0){  cout<<"NO SOLUTION"; return 0; }
    
    
    string first="",second="";
    for(auto x : m)
    {
    	string str(x.second/2,x.first);
    	// cout<<str<<endl;
    	first=first + str;
    	second=str+second;
    }
   if(c==1)
    {
       cout<<first+ch+second;
    }
    else cout<<first+second;
}