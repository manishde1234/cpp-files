#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	ll a,b,n;
	cin >> a >> b >> n;
	ll arr[n];
	for (ll i = 0; i < n; ++i)
	    {
	    	cin >> arr[i];
	    }    
	    ll sum = 1;
	    ll count =0;
	    // int i = 0;
	    // int ans = b;
	    for (ll i = 0; i < n; ++i)
	    {	
	    	
	    	if (1 + arr[i] >= a)
	    	{
	    		count = count + (a-1);
	    	}
	    	else{
	    		count = count + arr[i];
	    	}
	    }
	    // while(b > 0){
	    	
	    // 	if (b == 1 && i < n)
	    // 	{
	    // 		if (b + arr[i] > a)
	    // 		{
	    // 			b += a;
	    // 		}
	    // 		else{
	    // 			b += b + arr[i];
	    // 		}
	    // 		// b += min(a,b + arr[i]);
	    // 		i++;

	    // 	}
	    // 	count ++;
	    // 	b--;
	    // }
	    cout << count+b  << endl;

}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

