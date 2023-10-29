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

	int arr[2*n];

	int m = 0;

	for (int i = 0; i < 2*n; ++i)
	    {
	    	cin >> arr[i];
	    }
	std::map<int, int> mp;
	for (int i = 0; i < 2*n; ++i)
	    {
	    	mp[arr[i]]++;
	    }    

	 for (auto x : mp) {
        m = max(m,x.second);
    }
    cout << m << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

