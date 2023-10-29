#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

//minimum length of subarray with given targetsum

void solve(){
    int arr[10] = {4 , 2 , 1 , 7 , 8 , 1 , 2 , 8 , 1 , 0};
    int current_sum = 0;
    int windowstart = 0;
    int windowsize = INT_MAX ;
    int targetsum = 8;

    for(int windowend = 0; windowend < 10; windowend++){
    	current_sum+= arr[windowend];
    	while(current_sum >= targetsum){
    		//decreasing the window size 
    		windowsize = min(windowsize, windowend - windowstart+1);
    		current_sum-=arr[windowstart];
    		windowstart++;
    	}
    }
    cout << windowsize <<endl;
    
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

