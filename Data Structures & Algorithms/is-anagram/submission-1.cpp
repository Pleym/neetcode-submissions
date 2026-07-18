class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        std::unordered_map<char,int> string_A;
        std::unordered_map<char,int> string_B;
        for (int i = 0; i < t.length(); i++){
            string_A[s[i]]++;
            string_B[t[i]]++;
        }
        return string_A == string_B;

    }
};
