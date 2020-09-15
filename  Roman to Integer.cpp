class Solution {
public:
    int romanToInt(string s) {
        if (s.empty())
            return 0;

        unordered_map<char, int> map({ {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},  {'C', 100}, {'D', 500}, {'M', 1000} });

        int val = 0;
        for (int i = 0; i < s.size(); i++) {
            val += map[s[i]];
            if (i > 0 && map[s[i]] > map[s[i - 1]])
                val -= 2 * map[s[i - 1]];
        }
        return val;
    }
};
