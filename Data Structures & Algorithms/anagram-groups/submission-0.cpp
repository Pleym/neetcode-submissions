class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> result;
        std::vector<bool> visited(strs.size(), false);
        for (int i = 0; i < strs.size();i++){
            if (visited[i]) continue;
            vector<string> group = {strs[i]};
            visited[i] = true;
            auto s = strs[i];
            for (int j=i+1; j < strs.size(); j++){
                if (visited[j]) continue;
                auto t = strs[j];
                std::unordered_map<char,int> wordA;
                std::unordered_map<char,int> wordB;
                if (s.length() == t.length()){
                    for (int c = 0; c < s.length();c++){
                        wordA[s[c]]++;
                        wordB[t[c]]++;
                    }
                    if (wordA == wordB){
                        group.push_back(strs[j]);
                        visited[j] = true;
                    }
                }
            }
            result.push_back(group);
        }
        return result;
    }
};