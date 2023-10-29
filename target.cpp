#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	int n = 10;
	int ans = 0;
	int x , y;
	for (int i = 0; i < n; ++i)
	    {	string s;
			cin >> s;
	    	for (int j = 0; j < n; ++j)
	    	{
	    		if (s[j] == 'X')
	    			{
	    				x=i+1;y=j+1;
	    				if (x ==1 || x == 10 || y == 1 || y == 10)
	    				{
	    					ans = ans +1;
	    				}
	    				else if (x == 2 || x == 9 || y == 2 || y == 9)
	    				{
	    					ans = ans +2;
	    				}
	    				else if (x == 3 || x == 8 || y == 3 || y == 8)
	    				{
	    					ans = ans +3;
	    				}
	    				else if (x == 4 || x == 7 || y == 4 || y == 7)
	    				{
	    					ans = ans +4;
	    				}
	    				else if (x == 5 || x == 6 || y == 5 || y == 6)
	    				{
	    					ans = ans +5;
	    				}
	    			}	
	    	}
	    }  
	    cout << ans << endl;  
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

