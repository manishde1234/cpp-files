#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int n,t,k,d;
    cin >> n >> t >> k >> d;

    int count = 0;
//we go till count < d and check if cakes are left
//then we need a second oven else we dont 
    while(count <= d){
    	n -= k;
    	count += t;
    }

    if (n >= 1)
    {
    	cout << "YES" << endl;
    }
    else{
    	cout << "NO" << endl;
    }
    // int one_oven = 0;
    // int one_k = k;
    // int count = 0;
    // while(n >= one_k){
    // 	one_k += k;
    // 	count ++;
    // }
    // int t1 = t*count;
    // int count2 = 0;
    // int k2 = k;
    // while(n >= k2){
    // 	k2
    // }

}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt =1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

