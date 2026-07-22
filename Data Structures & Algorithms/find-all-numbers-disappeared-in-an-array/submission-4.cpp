class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int num: nums){
            int i = abs(num) - 1;
            nums[i] = - abs(nums[i]);
        }
        std::vector<int> result;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 0){
                result.push_back(i+1);
            }
        }
        return result;
    }
};