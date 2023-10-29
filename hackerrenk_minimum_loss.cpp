#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector <int> ar(n);
    map <int,int> mp;

    for(int i =0 ; i<n ;i++){
    	cin>>ar[i];
    	mp[ar[i]]++;
    }
    int ans = INT_MAX;

    //reverse traversal
    for(int i =n-1;i>0 ;i--){
    	mp[ar[i]]--;
    	if(mp[ar[i]] == 0)
    		mp.erase(ar[i]);
        //exception if array is sorted
        //ar[i]+1 because lowerbound returns the same element
        //* because it is iterator
    	if((*(mp.lower_bound(ar[i]+1))).first - ar[i] < 0){
    		ans = min(ans, ar[i] - ar[i-1]);
    		continue;
    	}
    	ans = min(ans, (*(mp.lower_bound(ar[i]+1))).first - ar[i]);
    }
    cout<<ans<<endl;

    return 0;
}

