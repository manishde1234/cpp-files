#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int n ,x;
    cin >> n >> x;
	ll ans = x;
	int kid = 0;
    for(int i = 0; i < n; i++){
    	int val;
    	char sign;
    	cin >> sign >> val;
    	if (sign == '+')
    	{
    		ans += val;
    	}
    	else{
    		if (ans < val)
    		{
    			kid++;
    		}
    		else{
    		ans -= val;

    		}
    	}
    }
    cout << ans <<" " << kid << endl;

}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt =1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

