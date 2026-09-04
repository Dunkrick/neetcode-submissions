class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, maxLength = 0;
        unordered_set<char> seen;
        while(right < s.length()){
            while(seen.find(s[right]) != seen.end()){
                seen.erase(s[left]);
                left ++;
            }
            seen.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
        return maxLength;
    }
};
