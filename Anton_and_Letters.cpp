#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    string inp;
    getline(cin,inp);
    // cout << inp.length() << endl;

    map<char,int>mp;

    for (int i = 1; i < inp.length() -1; ++i)
    {	if (isalpha(inp[i]))
    {
    	mp[inp[i]]++;
    }
    	
    }
  	// for (auto it :mp)
  	// {
  	// 	cout << it.first <<" ";
  	// }
  	cout << mp.size() << endl;	
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

