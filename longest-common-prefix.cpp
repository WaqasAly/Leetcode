class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string result="";
            for (int x = 0; x < strs[0].size(); x++) {
                result += strs[0][x];
                for (int y = 1; y < strs.size(); y++) {
                    if (!isContains(strs[y], result)) {
                        return result.substr(0, result.size() - 1); 
                    }
                }
            }
            return result;
        }
    
        bool isContains(string input, string target) {
            return input.find(target) == 0;
        }
};