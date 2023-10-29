#include <bits/stdc++.h>
using namespace std;
int main(){
 int n, d;
 cin>>n>>d;
 vector <int> ar(n);
 for(int i=0;i<n;i++)
 cin>>ar[i];
 map <int,int> mp;

 int res =0;
 for(int i =0;i<n ;i++){
 if(i < d)
 mp[ar[i]]++;
 else{
 double mid;
 int pos = 0;
 for(auto x : mp){
 pos += x.second;
 if(pos >= d/2 + 1){
 mid = x.first;
 break;
 }
 }
 //
 pos = 0;
 if(d%2 == 0){
 for(auto x : mp){
 pos += x.second;
 if(pos >= d/2){
 //calculate median
 mid = (double)(mid + x.first)/(double)2;
 break;
 }
 }
 }
 //count the number of times exp is
 //greater than the median
 if(mid*2 <= ar[i])
 res++;
//delete last element and add the checked element
 mp[ar[i-d]]--;
 mp[ar[i]]++;
 }
 }
 cout<<res<<endl;
}
/*
9 5
2 3 4 2 3 6 8 4 5
*/