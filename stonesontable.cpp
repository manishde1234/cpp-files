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

	string s;
	cin >> s;

	int sum = 0;
	for (int i = 0; i < n; ++i)
	    {
	    	if (s[i] == s[i+1])
	    	{
	    		sum++;
	    	}
	    } 
	cout << sum << endl;   
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    while(tt--)
        solve();

    return 0;
}

