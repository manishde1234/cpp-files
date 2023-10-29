#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	int n;
	cin >> n;
	string s, t,u,ans;
	cin >>s >> t >>u;
	int diff =(t[0]- s[0] +26)%26;
	string chars ="abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < n; ++i)
	    {
	    	int index = (u[i] -'a' +diff)%26;
	    	ans+= chars[index];
	    }    
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

