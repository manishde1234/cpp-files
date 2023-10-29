#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    string s, t;
    cin >> s >> t;
    int j = 0;
    int count = 1;

    for (int i = 0; i < t.size(); ++i)
    {
    	if (t[i] == s[j])
    	{
    		count ++;
    		j ++;
    	}
    }
    cout << count << endl;

}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    while(tt--)
        solve();

    return 0;
}

