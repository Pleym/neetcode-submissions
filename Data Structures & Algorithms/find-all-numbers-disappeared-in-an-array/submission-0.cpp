class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        std::unordered_set<int>nums_missing(nums.begin(),nums.end());
        std::vector<int> result;
        int n = nums.size();
        for (int i = 0 ; i < n; i++) {
            if (nums_missing.find(i+1) == nums_missing.end()){
                result.push_back(i+1);
            }
        }
        return result;
        
    }
};