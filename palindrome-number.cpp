#include <string>
#include <algorithm>
class Solution {
public:
    bool isPalindrome(int x) {
        string temp = to_string(x);
        string temp2 = temp;
        reverse(temp2.begin(), temp2.end());
        if(temp == temp2)
            return true;
        return false;
    }
};