#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int n ,k;
    cin >> n >> k;
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string ans ="";
    for (int i = 0; i < n; ++i)
    {
    	if (i < k)
    	{
    		ans.push_back(alphabet[i]);
    	}
    	else{
    		// int d = i-k;
    		int m = i % k;
    		// cout << d << endl;
    		ans.push_back(alphabet[m]);
    	}
    	
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    // cin>>tt;
    // while(tt--)
        solve();

    return 0;
}

