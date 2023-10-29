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
	/*
	if n is even and countodd is even then yes 
	as sum of even odd nums = even 
	else no */
	int arr[n];

	int counteven = 0, countodd = 0;    

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if (arr[i] % 2 == 0)
		{
			counteven++;
		}
		else countodd++;
	}
	// if ((counteven % 2 == 0 && countodd % 2 == 0) || (counteven % 2 == 1 && countodd % 2 == 1))
	if(countodd % 2 == 0)
	{
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

