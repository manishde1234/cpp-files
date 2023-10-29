#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	ll n;
	cin>>n;
    vector <ll> ar(n);
    for(int i =0;i<n ;i++)
    	cin>>ar[i];
    sort(ar.begin(), ar.end());
    for(auto x : ar)
    	cout<<x<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    while(tt--)
        solve();

    return 0;
}

// 4 4 4 1
// 1 5 4 4