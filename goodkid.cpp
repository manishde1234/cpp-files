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
	// int zero = 0;
	// for (int i = 0; i < n; ++i)
	// {
	// 	if (arr[i] == 0)
	// 	{
	// 		arr[i] = 1;
	// 		zero = 1;
	// 		break;
	// 	}

		
	// }
	// int one = 0;
	// int max = 0;
	// int index = 0;
	// if (zero == 0)
	// {
	// 	for (int i = 0; i < n; ++i)
	// 	{	if (arr[i] > max)
	// 	{
	// 		max = arr[i];
	// 		index = i;
	// 	}
	// 		if (arr[i] == 1)
	// 		{
	// 			arr[i] = 2;
	// 			one = 1;
	// 			break;
	// 		}
	// 	}
	// }
	
	// if (zero == 0 || one == 0)
	// {
	// 	arr[index] = max+1;
	// }
	int minimum = 10;
	int index = 0;
	for (int i = 0; i < n; ++i)
	{
		// minimum = min(minimum,arr[i]);
		if (minimum > arr[i])
		{
			minimum = arr[i];
			index = i;
		}
	}
	arr[index] = minimum+1;
	int product = 1;
	for (int i = 0; i < n; ++i)
	{
		product = product*arr[i];
	}
	cout << product << endl;

}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

