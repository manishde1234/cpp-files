#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
	int x, y, z;
	cin >> x >> y >> z;    

	if((y*z)%x == 0){
		cout << y*z << " "<< x <<endl;
		
	}

	else if((x*z)%y == 0){
		cout << x*z << " "<< y <<endl;
		
	}

	else if((y*x)%z == 0){
		cout << y*x <<" "<< z <<endl;
		
	}
	else cout << "-1" <<endl;

}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

