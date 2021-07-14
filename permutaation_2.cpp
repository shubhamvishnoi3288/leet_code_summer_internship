class Solution {
    private:
        vector<vector<int>> ans;
        unordered_map<int, int> mp;
    
    public:
        
        void backTrack(vector<int> nums, vector<int> curr){
            if(curr.size() == nums.size()){
                ans.push_back(curr);
                return;
            }
            
            int pre = -11;
            
            for(int i : nums){
                if(mp[i] && pre != i){
                    mp[i]--;
                    curr.push_back(i);
                    backTrack(nums, curr);
                    curr.pop_back();
                    mp[i]++;
                    pre = i;
                }
            }
        }
    
        vector<vector<int>> permuteUnique(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            
            for(int i : nums)
                mp[i]++;
            
            vector<int> curr;
            backTrack(nums, curr);
            return ans;
        }
};