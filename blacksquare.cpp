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

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    string s;
    cin >> s;
    ll size = s.size();
    int sum = 0;
    for (ll i = 0; i < size; ++i)
    {
    	if (s[i] == '1')
    	{
    		sum = sum + arr[0];
    	}
    	if (s[i] == '2')
    	{
    		sum = sum + arr[1];
    	}
    	if (s[i] == '3')
    	{
    		sum = sum + arr[2];
    	}
    	if (s[i] == '4')
    	{
    		sum = sum + arr[3];
    	}
    }
    // ll m = stoi(s);

    // while (m > 0){
    // 	int rem = m % 10;
    // 	sum = sum + arr[rem -1];
    // 	m = m/10;
    // }
    // for (int i = 0; i < s.size(); ++i)
    // {
    // 	// string part = s[i];
    // 	// int m = stoi(part);
    // 	// char ch = s[i];
    // 	// int m = int (ch) -48;
    // 	sum = sum + arr[m];

    // }
    cout << sum << endl;
}

// cin >> n;
int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    while(tt--)
        solve();

    return 0;
}

