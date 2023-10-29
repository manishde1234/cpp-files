#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){
    int arr[5][5];
    int a , b;
    for (int i = 0; i < 5; ++i)
    {
    	for (int j = 0; j < 5; ++j)
    	{
    		cin >> arr[i][j];
    		if (arr[i][j] == 1)
    		{
    			a = i+1;
    			b = j+1;
    		}
    	}
    }
    cout << a << " " << b << endl;
    int m = abs(3-a);
    int n = abs(3-b);
    cout << m << " " << n << endl;
    cout << m + n << endl;

}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    
    while(tt--)
        solve();

    return 0;
}

