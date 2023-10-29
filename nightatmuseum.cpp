#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    string s ;
    cin >> s;
    int sum = 0;
    int ptr = 97;
    int m = 0;
    int n = 0;
    for (int i = 0; i < s.size(); ++i)
    {

    	m = s[i] - ptr;

    	if (m < 0)
    	{
    		m = m * -1;
    		//positive 
    	}
    	if (m > 13)
    	{
    		sum = sum + (26 - m);
    		//half circle
    	}
    	else{
    		sum = sum + m;
    	}
    	ptr = s[i];

    // 	m = abs(ptr - int(s[i]));
    // 	n = 26-abs(int (s[i]) - ptr);
    // 	if (m < n)
    // 	{
    // 		sum = sum + m;

    // 	}
    // 	else{
    // 		sum = sum + n;
    // 	}
    // 	 cout << sum << endl;
    // 	ptr = int(s[i]);
    // }
    
    // // cout << int(s[0]) -int( s[1]);
}
cout << sum << endl;
}
int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt=1;
    while(tt--)
        solve();

    return 0;
}

