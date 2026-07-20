class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> x;
        for (int n : nums) {
            x[n]++;
        }
        std::priority_queue<pair<int,int>>heap;
        for (auto [num,count] : x){
            heap.push({count,num});
        }

        std::vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(heap.top().second);
            heap.pop();
        }
        return result;
    }
};
