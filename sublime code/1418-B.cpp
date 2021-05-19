// #include <bits/stdc++.h>

// using namespace std;

// #define sz(a) int((a).size())
// #define forn(i, n) for (int i = 0; i < int(n); ++i)

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n), c;
//     forn(i, n) cin >> a[i];
//     forn(i, n) cin >> b[i];
//     forn(i, n) if (!b[i])
//         c.push_back(a[i]);

//     sort(c.rbegin(), c.rend());
//     // for(auto k : c)cout<<k<<" ";
//     int j = 0;
//     forn(i, n) {
//         if (b[i]) cout << a[i] << ' ';
//         else cout << c[j++] << ' ';
//     }
//     cout << '\n';
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) solve();
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fun(vector<int> &ar,int n)
{
	
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       ll n;  cin>>n;
       vector<int> a(n),b(n),c;
       for(ll i=0;i<n;i++)cin>>a[i];
       for(ll i=0;i<n;i++){cin>>b[i]; if(b[i]==0)c.push_back(a[i]);}
       sort(c.rbegin(), c.rend());
         int x=0;
       for(int i=0;i<n;i++)
       {
       	if(b[i]==1)cout<<a[i]<<" ";
       	else cout<<c[x++]<<" ";
       }
       cout<<endl;
   }
}