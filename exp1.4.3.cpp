#include <bits/stdc++.h>

using namespace std;

int main(){
  int n , k;
  cin>>n>>k;
  vector <int> ar(n);
  map <int,int> mp;
  for(int i =0; i<n ; i++){
    cin>>ar[i];
    mp[ar[i]]++;
  }
  int ans = 0;
  for(int i =0;i<n ;i++){
    if(mp.find(ar[i] - k) != mp.end()){
      if(k == 0 && mp[ar[i]-k] > 1)
        ans += mp[ar[i]-k] -1;
      else if(k != 0){
        ans += mp[ar[i]-k];
      }
    }
  }
  ans;
  cout<<ans<<endl;
  
  return 0;
}
// test case
/*
5 2
1 5 3 4 2
*/