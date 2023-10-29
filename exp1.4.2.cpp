#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector <int> ar(n);
 map <int,int> mp;
 for(int i =0;i<n; i++){
 cin>>ar[i];
 mp[ar[i]]++;
 }
 int m;
 cin>>m;
 vector <int> br(m);
 vector <int> ans;
 //input vector 2 and check wheather the element
 //is in vector 1
 for(int i = 0;i<m ;i++){
 cin>>br[i];
 if(mp[br[i]] == 0){
 //if not present push in ans vector
 ans.push_back(br[i]);
 }
 mp[br[i]]--;
 }
 sort(ans.begin(), ans.end());
 //print the answer
 for(auto x : ans)
 cout<<x<<" ";
 cout<<endl;
 return 0;
}
/*
10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204
*/