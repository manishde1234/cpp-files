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
	string s;
	cin >> s;

	// int m = stoi(s);
	int pos = -1;
	for (int i = 0; i < n; ++i)
	    {
	    	if (s[i] == '1')
	    	{
	    		pos = i;
	    		break;
	    	}
	    }   
	    if (pos == n-1 || pos == n-2)
	     {
	     	cout << s <<endl;
	     } 
	     else{
	     	for (int i = pos+1; i < n; ++i)
	     	{
	     		s[i] = '0';
	     	}
	     }
	    cout << s << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

