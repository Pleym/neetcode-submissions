/*
 HASH SET 
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<int> num_set(nums.begin(),nums.end());
        int n = nums.size();
        for (int i = 0;i<= n; i++){
            if (num_set.find(i) == num_set.end()) {
                return i;
            }
        }
        return -1;
    }
};
