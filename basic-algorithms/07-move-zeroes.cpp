class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[index], nums[i]);
                index++;
            }
        }
    }
};

// Test Case 1: [0,1,0,3,12] → [1,3,12,0,0]
// Test Case 2: [0] → [0]