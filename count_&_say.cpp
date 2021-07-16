class Solution {
public:
    string countAndSay(int n) {

        if(n == 1) return "1";
        
        string temp = countAndSay(n-1);
        
        string ans = "";
        int cnt = 1,i;
        
        for(i=1;i<temp.size();i++) {
            if(temp[i] == temp[i-1]) {
                cnt++;
            }
            else {
                ans += (to_string(cnt) + temp[i-1]);
                cnt = 1;
            }
        }
        
        ans += (to_string(cnt) + temp[i-1]);
        return ans;
        
    }
};