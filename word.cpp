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

    int n = s.size();
    int countsmall = 0; int countlarge = 0;
    for (int i = 0; i < n; ++i)
    {
    	if (islower(s[i]))
    	{
    		countsmall++;
    	}
    	if (isupper(s[i]))
    	{
    		countlarge++;
    	}
    	// if (s[i] >= 'a' && s[i] < = 'z')
    	// {
    	// 	countsmall++;
    	// }

    }
    if (countsmall >= countlarge)
    {
    	for (auto &x:s)
    	{
    		x = tolower(x);
    	}
    	cout << s << endl;
    }
    else  {
    	for (auto &x : s)
    	{
    		x = toupper(x);
    	}
    	cout << s << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    
    while(tt--)
        solve();

    return 0;
}

