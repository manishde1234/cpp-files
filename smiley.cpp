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

	int ans = 0;

	string s;
	cin >> s;

	stack<char>st;

	for (int i = 0; i < n; ++i)
	    {
	    	st.push(s[i]);
	    }    
	bool firstsemicolon = false;
	bool atleastonebracket = false;

	while(!st.empty()){

		char element = st.top();

		st.pop();

		if (element == ')'){
			if (firstsemicolon)
			{
				atleastonebracket = true;
			}
			continue;
		}
		else if(element == '('){
			firstsemicolon = false;
			atleastonebracket = false;
		}

		else if(element == ':'){
			if (firstsemicolon && atleastonebracket)
			{
				ans++;
				firstsemicolon = true;
				atleastonebracket = false;
			}

			else{
				firstsemicolon = true;
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

