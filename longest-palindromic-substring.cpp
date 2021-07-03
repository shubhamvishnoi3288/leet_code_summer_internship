class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string res="";
        int leni=1,lenj=1,i,j;
        int dp[n+1][n+1];
        for(i=0;i<n+1;i++)
        {
            dp[0][i]=1;
            dp[1][i]=1;
        }
        for(i=2;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                if(s[j-1]==s[j-i]&&dp[i-2][j-1]==1)
                    dp[i][j]=1,leni=i,lenj=j;
                else
                    dp[i][j]=0;
            }
        }
        for(i=lenj-leni;i<lenj;i++)
            res.push_back(s[i]);
        
        return res;
    }
};
