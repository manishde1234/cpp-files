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
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    	sum += arr[i]; 
    }
    int sejda = 0,dima = 0;
    // for (int i = 0; i < n/2; i+2)
    // { 
    // 	if (arr[i] < arr[j])
    // 	{
    // 		sejda+= arr[j];
    // 		j--;

    // 	}
    // 	else{
    // 		sejda += arr[i];
    // 		i++;
    // 	}
    // }
    int j = n-1;
    int i = 0;
    int count = 0;
    while(i <= j){
    	if (count % 2 != 0)
    	{
    		if (arr[i] < arr[j])
    	{
    		sejda+= arr[j];
    		j--;

    	}
    	else{
    		sejda += arr[i];
    		i++;
    	}
    	count++;
    	}
    	else{
    		if (arr[i] < arr[j])
    	{
    		dima+= arr[j];
    		j--;

    	}
    	else{
    		dima += arr[i];
    		i++;
    	}
    	count++;
    	}

    
    }
    
    cout << dima <<" "<< sejda << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt=1;
    while(tt--)
        solve();

    return 0;
}

