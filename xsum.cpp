#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl = '\n';

void solve() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int sum = INT_MIN;
    for (int i = 0; i < n; ++i)



    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < m; ++j)
        {
            int suminitial = 0;
            int x = i, y = j;
            //lowerright
            while (x < n && y < m) {
                suminitial = suminitial + arr[x][y];
                x += 1;
                y += 1;
            }
            x = i, y = j;
            //upperleft
            while (x >= 0 && y >= 0) {
                suminitial = suminitial + arr[x][y];
                x -= 1;
                y -= 1;
            }
            x = i, y = j;
            //lowerleft
            while (x < n && y >= 0) {
                suminitial = suminitial + arr[x][y];
                x += 1;
                y -= 1;
            }
            //upperright
            x = i, y = j;
            while (y < m && x >= 0) {
                suminitial = suminitial + arr[x][y];
                x -= 1;
                y += 1;
            }
            suminitial = suminitial - 3 * arr[i][j];
            sum = max(suminitial, sum);
        }
    }
    cout << sum << endl;


}

int main() {
    ios_base::sync_with_stdio(false);  cin.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();

    return 0;
}

