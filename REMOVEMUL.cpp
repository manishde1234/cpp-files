#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    ll n , m;
    cin >> n >> m;

    ll s[n] , q[m];

    ll totalsum = 0 , sum = 0;

    for (ll i = 0; i < m; ++i)
    {
    	cin >> q[i];
    	sum = sum + q[i];
    }

    // for (int i = 0; i < n; ++i)
    // {
    // 	s[i] = i+1;
    // 	totalsum = totalsum + s[i];
    // }
    totalsum = n * (n+1)/2;
    cout << totalsum - sum << endl;

   
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

