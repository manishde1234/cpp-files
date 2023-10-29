#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';
/*
10 10
1 61 126 217 2876 6127 39162 98126 712687 1000000000
100 6127 1 61 200 -10000 1 217 10000 1000000000
*/
void solve(){
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for (int i = 0; i < n; ++i){
	    	cin >> arr[i];
	    }

	    
	    // 3 2
	    // 1 2 3
	    // 3 1
	    for (int i = 0; i < k; ++i){
	    	int m ;
	    	cin >> m;

	    	int start = 0;
	    	int end = n-1;

	    	
	    	int found = 0;
	    	
	    	while(start <= end){
	    		int mid = (start + end)/2;
	    		if (arr[mid] == m ){
	    		// cout << "YES" << endl;
	    			found = 1;
	    			break;
	    		}
	    		else if (arr[mid] > m){
	    			end = mid - 1;
	    		}
	    		else if (arr[mid] < m ){
	    			start = mid + 1;
	    		}
	    	}

	    	if (found == 1){
	    		cout << "YES" << endl;
	    	}
	    	else{
	    		cout << "NO" <<endl;
	    	}
	    	
	    }

}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

