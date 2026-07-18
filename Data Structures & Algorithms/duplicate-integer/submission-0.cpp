class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> nums_dupl;  
        for (int i= 0; i < nums.size(); i++) {
            if (nums_dupl.count(nums[i])) {
                return true;
            }
            nums_dupl.insert(nums[i]);
        }
        return false;
    }
};