#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int

 

int i,j,cnt=0;
int main()
{
	int a,b,res=0; cin>>a>>b;
	 while(a - b >= 0)
	 {
            
            int x = 0;
            while( a - (b << 1 << x) >= 0)
            {
            	cout<<(b << 1 << x)<<" ";
                x++;
            }
            res += 1 << x;
            a -= b << x;
    }
        cout<<endl<<res;
}