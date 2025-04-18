#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; 

        for (int i = 0; i < nums.size(); i++) {
            int result = target - nums[i];

            if (num_map.find(result) != num_map.end()) {
                return {num_map[result], i};
            }
            
            num_map[nums[i]] = i;
        }

        return {};
    }
};
