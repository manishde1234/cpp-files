#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';



int main(){
ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    
    int n;
    cin >> n;

    vector<int> ar(n);
    for(auto &x : ar) cin >> x;

    sort(ar.begin(),ar.end());
    int l = -1, r = n;
    // 1 2 3 4 5 // 1
    int to_find; cin >> to_find;
    while(l <= r){
      int mid = (l + r)/2;
      if(ar[mid] >= to_find){
        r = mid - 1;
      }
      else{
        l = mid + 1;
      }
    }
    if(l <= 0){
      cout << 0 << endl;
    }
    else{
      cout << l << endl;
    }
    return 0;
}
for (int i = 0; i < count; ++i)
{
  /* code */
}
for(unsigned i = 0; i < count; ++i) {
  /* code */
}
if(/* condition */) {
  /* code */
}

