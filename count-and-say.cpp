class Solution {
    public:
        string countAndSay(int n) {
            if (n == 1) return "1";  
    
            string input = countAndSay(n - 1);  
            string result = "";
            int counter = 1;
            char temp = ' ';
            temp = input[0];
            for(int x = 1; x<input.length(); x++)
            {
                if(temp == input[x])
                {
                    counter++;
                }
                else
                {
                    result += to_string(counter) + temp;
                    counter = 1;
                    temp = input[x];
                }
            }
            result += to_string(counter) + temp;
            return result;
        }
    };