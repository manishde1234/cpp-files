#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    string a,b;
    cin >> a >> b;
    for (int i = 0; i < int(a.size()); ++i)
    {
    	a[i] = tolower(a[i]);
    	b[i] = tolower(b[i]);
    }
    if (a > b)
    {
    	cout << "1" << endl;
    }
    else if (a == b){
    	cout << "0"<< endl;

    }
    else{
    	cout << "-1" <<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt =1;
    while(tt--)
        solve();

    return 0;
}

