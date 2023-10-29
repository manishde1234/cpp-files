#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	int n , m;
	//m different colors of ball
	cin >> n >> m;

	int arr[m];
	int sum = 0;

	for (int i = 0; i < m; ++i)
	    {
	    	cin >> arr[i];
	    	sum = sum + arr[i];
	    }    

	int x, y;

	//minimum  balls in 1 box
	x = sum/n;
	// remaining balls
	y = sum % n;

	if (x >= m)
	{
		cout << n << endl;
	}
	else if (x+1 == m)
	{
		cout << y << endl;
	}
	else cout << "0" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

