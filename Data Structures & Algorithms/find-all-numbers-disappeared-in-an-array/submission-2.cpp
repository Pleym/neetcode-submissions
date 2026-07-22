class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        std::unordered_set<int>nums_missing(nums.begin(),nums.end());
        std::vector<int> result;
        int n = nums.size();
        for (int i = 1 ; i <= n; i++) {
            if (nums_missing.find(i) == nums_missing.end()){
                result.push_back(i);
            }
        }
        return result;
        
    }
};