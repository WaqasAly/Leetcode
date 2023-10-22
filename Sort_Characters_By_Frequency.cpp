class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for (char c : s) {
            m[c]++;
        }
        vector<pair<int, char>> v;
        for (auto& p : m) {
            v.push_back({ p.second, p.first });
        }
        sort(v.begin(), v.end(), greater<pair<int, char>>());
        string res;
        for (auto& p : v) {
            res += string(p.first, p.second);
        }
        return res;
    }
};