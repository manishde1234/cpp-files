#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	string s;
	cin >> s;

	std::map<char, int> mp;
	for (int i = 0; i < s.length(); ++i)
	    {
	    	mp[s[i]];
	    }    

	    if (mp.size() % 2 == 0)
	    {
	    	cout << "CHAT WITH HER!" << endl;
	    }
	    else 
	    	cout << "IGNORE HIM!" << endl;
	 // for(auto i : mp){

	 // }
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    
    while(tt--)
        solve();

    return 0;
}

