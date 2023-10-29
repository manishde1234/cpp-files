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
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    int count = 1;

    for (int i = 0; i < n-1; ++i)
    {
    	if (arr[i] != arr[i+1])
    	{
    		count++;
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

