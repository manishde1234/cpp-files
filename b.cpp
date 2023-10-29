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

  
    while(n > 0){
    	if (n % 2 == 0)
    	{
    		n = n/2;
    	}
    	else if (n % 3 == 0)
    	{
    		n = n/3;
    	}
    	else{
    		break;
    	}
    }
       if (n == 1)
    {
    	cout << "Yes" << endl;
    }
    else if (n > 0)
    {
    	cout << "No" << endl;
    	// cout << n << endl;
    }
    else{
    	cout << "Yes" << endl;
    	// cout << n << endl;
    }
    // if (n == 1)
    // {
    // 	cout << "Yes" << endl;
    // }
	// else if (n % 2 == 0 || n % 3 == 0 || n % 6 == 0)
    // {
    // 	cout << "Yes" << endl;
    // }
    // else{
    // 	cout << "No" << endl;
    // }
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt =1 ;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

