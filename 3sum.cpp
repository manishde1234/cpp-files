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

	int target;
	cin >> target;

	std::vector<int> vec(n);
	for(auto &i : vec){
		cin >> i;
	}    


	bool found = false;

	sort(vec.begin(),vec.end());

	for (int i = 0; i < n; ++i)
	{
		int lo = i+1;
		int hi = n-1;
		while(lo < hi){
			int current = vec[i] + vec[lo] + vec[hi];

			if (current == target)
			{
				 found = true;
				 break;
			}
			if (current < target){
				lo++;
			}
			if (current > target)
			{
				hi--;
			}
			
		}
	}
	if (found == true)
	{
		cout << "true" << endl;
	}
	else
		cout << "false" << endl;

    return 0;
}

