#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector <int> ar(n);
    
    for(int i =0;i<n ;i++)
    	cin>>ar[i];

   	sort(ar.begin(), ar.end());

   	vector <int> ans;
   	int mn = INT_MAX;

    //in sorted array least diff = arr[i] - arr[i-1]
   	for(int i =0;i<n-1 ;i++)
   		mn = min(mn, ar[i+1] - ar[i]);
   	
   	for(int i =0;i<n-1; i++){
   		if(ar[i+1] - ar[i] == mn){
   			ans.push_back(ar[i]);
   			ans.push_back(ar[i+1]);
   		}
   	}
   	for(auto x : ans)
   		cout<<x<<" ";
   	cout<<endl;
    return 0;
}

