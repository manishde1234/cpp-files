#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    for (int i = 0; i < k; ++i)
    {
    	int input ;
    	cin >> input;

    	int l = -1;//a[l] <=x
    	int r = n;//a[r] >x

    	while(r > l+1){
    		int mid = (r+l)/2;
    		if (arr[mid] > input)
    		{
    			r = mid;
    		}
    		else{
    			l = mid;
    		}
    	}
    	cout << l+1 << endl;
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

