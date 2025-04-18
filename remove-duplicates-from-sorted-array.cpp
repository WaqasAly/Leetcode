class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            std::set<int> s(nums.begin(), nums.end()); // remove duplicates
            nums.assign(s.begin(), s.end());           // update nums
            return nums.size();
        }
    };