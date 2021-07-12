class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(nums[nums.size() - 1] < target) return nums.size();
        if(nums[0] > target) return 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target) return i;
            else if (target < nums[i]) return i;
            
        }
        
        return false;
    }
};