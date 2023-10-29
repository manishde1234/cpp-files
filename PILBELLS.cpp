#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	int n,x,k,p,m;
	cin >> n >> x >> k >> p; 
	m = p;
	if(k >= x){
		p =m;
		p = p+((k-x)*5+(x*10) );
	}   
	if(k<x){
		p =m;
		p = p + k*10;
	}

	if(k>x && k==n){
		p = m;
		p = p +((x*10) + ((k-x)*5) )+20;
	}
	cout << p << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

