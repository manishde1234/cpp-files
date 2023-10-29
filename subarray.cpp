#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

//find the maximum sum subarray of a fixed size k

//   4 , 2 , 1 , 7 , 8 , 1 , 2 , 8 , 1 , 0 
void solve(){

    int arr[10] = {4 , 2 , 1 , 7 , 8 , 1 , 2 , 8 , 1 , 0};
    int k = 3;
    int maxsum = INT_MIN;
    int current_sum = 0;

    for (int i = 0; i < 10; ++i)
    {
    	
    	current_sum +=arr[i];

    	if(i >= k-1){
    		
    		maxsum = max(maxsum,current_sum);

    		//keeping the window size same 
    		current_sum -= arr[i - (k-1)];

    	}
    }
    cout << maxsum <<endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

