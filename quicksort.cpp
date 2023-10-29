#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

int partition(int arr[], int s, int e){
	int pivot = arr[s];//starting element of arr
	int cnt = 0;

//pivot is arr[s] so we start from s+1
	for (int i = s+1; i <= e; ++i)
	{
		if (arr[i] <= pivot)
		{
			cnt++;
		}
	}
	int pivotIndex = s + cnt;
	swap(arr[s],arr[pivotIndex]);

	//left and right pointer 
	int i = s, j = e;
	while(i < pivotIndex && j > pivotIndex){
		while(arr[i] <= pivot){
			i++;
		}
		while(arr[j] > pivot){
			j--;
		}

		if (i < pivotIndex && j > pivotIndex)
		{
			swap(arr[i++],arr[j--]);
		}
	}
return pivotIndex;

}
void quickSort(int arr[], int s, int e){
	//base case
	if (s >= e)
	{
		return;
	}

	//partition
	int p = partition(arr, s ,e);

	//left part
	quickSort(arr, s , p-1);

	//right part
	quickSort(arr, p+1 , e);
}
void solve(){
    int n = 5;
    int arr[5] = {2,4,1,6,9};

    quickSort( arr,0,4);

    for (int i = 0; i < n; ++i)
    {
    	cout << arr[i] <<" ";
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
    ll tt = 1;
    while(tt--)
        solve();

    return 0;
}

