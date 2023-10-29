#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int n,a;
    cin >> n >> a;
    int arr[n+1];

    for (int i = 1; i <= n; ++i)
    {
    	cin >> arr[i];
    }
    int count = 0;
    if (arr[a] == 1)
    	{
    		count++;
    	}
    for (int i = 1; i <= n; ++i)
    {
    	int m = a-i;
    	int j = a+i;


    	if ((m < 1|| j >= n+1))  		
    	{	
    		if(m<1 && j <= n && arr[j])
    			count++;
    		if (j >= n+1 && m >= 1 && arr[m])
    		{
    			count++;
    		}
    	}
    	else if (arr[m] == arr[j] && arr[m] == 1)
    	{
    		count+= 2;
    	}
    	
    }
    cout << count << endl;
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}

