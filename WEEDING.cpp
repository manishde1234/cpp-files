#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void solve(){  
    int n,m,k;
    cin >> n >> m >> k;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    if(arr[n-1]+k-1 <= m){
        cout << "yes" << endl;

    }
       else   cout << "no" << endl;

    // if (k == 1)
    // {
    //    if(arr[n-1]  <= m){
    //         }

    //     else cout << "no" << endl; 
    // }
    // if (k > 1)
    // {
    //      if(arr[n-1] + k <= m){
    //     cout << "yes" << endl;
    //         }

    //     else cout << "no" << endl;
    // }
    
        
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}

