#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result(strs[0].size(), ' ');

        for (int x = 0; x < strs[0].size(); x++) {
            result[x] = strs[0][x];

            for (int y = 1; y < strs.size(); y++) {
                if (!isContains(strs[y], result)) {
                    return result.substr(0, x); // return prefix found so far
                }
            }
        }

        return result; // if whole string is common
    }

    bool isContains(string input, string target) {
        // checking if input starts with target
        if (input.find(target) == 0)
            return true;
        return false;
    }
};

int main() {
    Solution sol;
    vector<string> strs;
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        strs.push_back(s);
    }

    string result = sol.longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
