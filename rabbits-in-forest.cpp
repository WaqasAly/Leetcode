class Solution {
    public:
        int numRabbits(vector<int>& answers) {
            unordered_map<int, int> freq;
            int total = 0;
    
            for (int ans : answers) {
                freq[ans]++;
            }
    
            for (auto [x, count] : freq) {
                int group_size = x + 1;
                int groups = ceil((double)count / group_size);
                total += groups * group_size;
            }
    
            return total;
        }
    };