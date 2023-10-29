#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	int n,q;
	cin >> n >>q;
	int arr[n];
	for (int i = 0; i < n; ++i)
	    {
	    	cin >> arr[i];
	    } 
	    sort(arr,arr+n,greater<int>());

	    vector<ll> prefixsum(n);
 // 1 2 3 4 5 6
	    			 // 1 3 6 10 15
	    prefixsum[0] = arr[0];
	    for (int i = 1; i < n; ++i){	
	    	prefixsum[i] = arr[i] + prefixsum[i - 1];
	    }
	  
	  for (int i = 0; i < q; ++i){
	   int query; cin >> query;
	   int idx = lower_bound(prefixsum.begin(),prefixsum.end(),query) - prefixsum.begin();
	   cout << ((idx == n) ? -1 : idx + 1) << nl;
	  }
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

