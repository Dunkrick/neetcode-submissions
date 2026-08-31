class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;

        while(left < right){
            while(!isalnum(s[left])) left++;
            while(!isalnum(s[right])) right--;

            if(left < right && toupper(s[left]) != toupper(s[right])) return false;

            left ++, right --;
        }
        return true;
    }
};
