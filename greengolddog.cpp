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
	vector<pair<int , int>>vec(n);
	int arr[n];   
	int brr[n]; 
	for (int i = 0; i < n; ++i)
	{
		cin >> brr[i];
		vec[i]={brr[i],i};
	}
	sort(vec.begin(),vec.end());
	cout << "sorted vec"<< endl;
	for (auto i:vec)
	{
		cout << i.first <<" " << i.second <<" ";
	}
	cout << "sorted vec end" << endl;

	
	for (int i = 0; i < n; ++i)
	{
		arr[vec[i].second] = n-i;

	}
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

