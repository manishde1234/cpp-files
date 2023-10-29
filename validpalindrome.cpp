#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';
string s;
int length = s.length();


	void removeSpecialCharacter(string s)
{
    for (int i = 0; i < length; i++) {
 
        // Finding the character whose
        // ASCII value fall under this
        // range
        if (s[i] < 'A' || s[i] > 'Z' && 
        	s[i] < 'a' || s[i] > 'z' &&
        	s[i] < '0' || s[i] > '9') {
            // erase function to erase
            // the character
            s.erase(i, 1);
            i--;
        }
    }
    // cout << s;
}
bool solve(){

	
	cin >>s;


	removeSpecialCharacter(s);

for (int i = 0; i < length/2; ++i)
{
	if(s[i] == s[length-i]){
		return true;
	}
	else return false;
}
    
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
   
        solve();

    return 0;
}

