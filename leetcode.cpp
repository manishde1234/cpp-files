class Solution {
public:
    //constraint 1000
    int t[1001][1001];

    bool solve(string s, int i , int j) {
        if (i >= j) {
            //palindrome
            return true;
        }
        if (t[i][j] != -1)
        {
            //element already visited
            return t[i][j];
        }
        if (s[i] == s[j]) {
            return t[i][j] =  solve(s, i + 1, j - 1);
        }
        return t[i][j] = 0;//if not palindrome
    }
    string longestPalindrome(string s) {
        int n = s.length();
        //initialize all value of t to -1
        memset(t, -1, sizeof(t));
        int maxlength = INT_MIN;
        int sp = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                if (solve(s, i, j) == true)
                {
                    if (j - i + 1 > maxlength)
                    {
                        maxlength = j - i + 1; //updating maxlength
                        sp = i;//updating starting point
                    }
                }
            }
        }
        return s.substr(sp, maxlength);
    }
};