#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
   string s;
   cin>>s;
   int n=s.length(),k=1,ans=1;
   for(int i=0;i<n-1;i++)
   {
      if(s[i]==s[i+1])k++;
      else k=1;
      ans = max(ans,k);
   }
   cout<<ans;
}