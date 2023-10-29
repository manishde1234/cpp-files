#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int w,y;
    cin >> w >> y;
    int z = max(w,y);

    int ans = 6 - z +1;
    int deno = 6;
    if (ans == 2 || ans == 3)
    {
    	deno = deno / ans;
    	ans = 1;
    	cout << ans << "/" << deno << endl;
    }
    else if (ans == 4)
    {
    	deno = deno / 2;
    	ans = 2;
    	cout << ans << "/" << deno << endl;
    }
    else if (ans == 6)
    {
    	deno = 1;
    	ans = 1;
    	cout << ans << "/" << deno << endl;
    }
    else{
    	cout << ans << "/" << deno << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

