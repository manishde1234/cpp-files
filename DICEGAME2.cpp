#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	int arr[3], arr2[3];
	for (int i = 0; i < 3; ++i)
	    {
	    	cin >> arr[i];
	    }    
	for (int i = 0; i < 3; ++i)
	    {
	    	cin >> arr2[i];
	    }
	sort(arr,arr+3);
	sort(arr2,arr2+3);
	int n = arr[1]+arr[2];
	int m = arr2[1]+arr2[2];

	if(n > m){
		cout << "Alice" <<endl;
	}
	else if(n == m){
		cout << "Tie" << endl;
	}
	else{
		cout << "Bob" << endl;
	}
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

