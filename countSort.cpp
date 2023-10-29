#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

void countSort(int arr[],int n){
    int k = arr[0];
    for (int i = 0; i < n; ++i)
    {
    	k = max(k,arr[i]);
    }

    int count[9] = {0};
    for (int i = 0; i < n; ++i)
    {
    	count[arr[i]]++;
    }
    for (int i = 1; i <= k; ++i)
    {
    	count[i] += count[i-1];
    }
    int output[n];
    for (int i = n-1; i >= 0; ++i)
    {
    	output[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	arr[i] = output[i];
    }
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    int arr[] = {1,3,2,3,4,1,6,4,3};

    countSort(arr,9);
    for(int i = 0 ; i < 9 ; i++){
    	cout << arr[i] << " ";
    }

    return 0;
}

