class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,n=s.length(),ans=0,c1=0;
        for(i=0;i<n;i++)
        {
            c1=0;
            set<char> st;
            for(j=i;j<n;j++)
            {
                if(st.find(s[j])==st.end())
                {
                    c1++;
                    st.insert(s[j]);
                }
                else 
                    break;
            }
            ans=max(ans,c1);
        }
        return ans;
    }
};
