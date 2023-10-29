#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int n, b, d;
    cin >> n >> b >> d;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	if (arr[i] <= b)
    	{
    		count += arr[i];
    	}
    	if (count > d )
    	{
    		ans++;
    		count = 0;
    	}
    }
    cout << ans << endl;
    /*
    1 1 1 
    1
    */
    /*
    2 951637 951638
44069 951637*/
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt =1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

