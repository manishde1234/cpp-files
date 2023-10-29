#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	int n,target;
	cin >> n;
	cin >> target;

	int arr[n];

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}    
	int a , b;
	for (int i = 0; i < n; ++i)
	{
		int lo = i;
		int hi = n-i-1;
		if (arr[lo] + arr[hi] == target)
		{
			a = lo;
			b = hi;
			break;
		}
		
	}
	cout << a << "," << b << endl;


}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt=1;
    while(tt--)
        solve();

    return 0;
}

