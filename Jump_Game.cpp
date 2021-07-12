class Solution {
public:
    bool canJump(vector<int>& nums) {
		//maxJump is the furthest point that we can reach, pivot is the current point that we are standing.
		//At the beginning, the furthest point we can reach is nums[0]
        int maxJump = nums[0]; int pivot = 0;
		//when the point we standing meet the furthest point that we can reach or the furthest point does not yet exceed the endpoint (nums.size()-1)), we will loop this action
        while((pivot <= maxJump and pivot < nums.size()) and maxJump < nums.size()-1) {
			//find the furthest point that we can reach from our current standing. if it exceeds the overall furthest point, assign it as the furthest point that we can reach.
            if(pivot+nums[pivot] > maxJump)
                maxJump = pivot+nums[pivot];
			//proceed to the next standing.
            pivot++;
        }
		// If the furthest point we can reach after escaping the loop is not as large as nums.size()-1, return false. Else return true
        if (maxJump < nums.size()-1)
            return false;
        return true;
    }
};