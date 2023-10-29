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
    vector<int>vec;
    for (int i = 0; i < s.length(); i+=2)
    {
    	vec.push_back(s[i]-'0');
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < vec.size(); ++i)
    {
    	cout << vec[i]  ;
    	if (i < vec.size()-1)
    	{
    		cout <<"+";
    	}
    }


}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt= 1;
    while(tt--)
        solve();

    return 0;
}

