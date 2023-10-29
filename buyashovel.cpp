#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int k , r;
    cin >> k >> r;

    int ans = k;
    int count = 0;
    int n = 10;
    for (int i = 1; i < n; ++i)
    {
    	if (ans% 10 == 0 || ans % 10 == r)
    	{
    		break;
    	}
    	ans = k*i;
    	count ++;
    }
    // while( k > 0){
    // 	if (k% 10 == 0 || k % 10 == r)
    // 	{
    // 		break;
    // 	}
    // 	ans = k*10;
    // 	count ++;
    // }
    if (count == 0)
    {
    	cout << count +1 <<endl;
    }
    else{
    	cout << count <<endl;
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

