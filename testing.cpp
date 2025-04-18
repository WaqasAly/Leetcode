#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            for(int x = 0; x<nums.size(); x++)
            {
                for(int y = x + 1; y<nums.size(); y++)
                {
                    if((nums[x] + nums[y]) == target)
                    {
                        result.push_back(x);
                        result.push_back(y);
                        return result;
                    }
                }
            }
            return result;
        }
    };

int main() {
    Solution sol;
    vector<int> nums = {3,2,4};
    int target = 6;

    vector<int> result = sol.twoSum(nums, target);
    cout << "Indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
