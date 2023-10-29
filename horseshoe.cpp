#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int n = 4;
    int arr[n];
    std::map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    	mp[arr[i]]++;
    }
    int count = 4 - mp.size();
    cout << count << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

