#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int n,m;
    cin >> n >> m;

    vector<pair<int,int>>vec;

    for (int i = 0; i < m; ++i)
    {
    	int a, b;
    	cin >> a >> b;

    	vec.push_back({b,a});
    }

    sort(vec.rbegin(),vec.rend());
    ll ans  = 0;
    for (int i = 0; i < m; ++i)
    {
    	ans += min(n, vec[i].second) * vec[i].first;
    	n -= min(n, vec[i].second);
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

