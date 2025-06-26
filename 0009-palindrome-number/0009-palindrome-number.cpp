class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long revnum = 0; // prevent overflow
        int dup = x;

        while (x > 0) {
            int ld = x % 10;
            x /= 10;
            revnum = (revnum * 10) + ld;
        }

        return dup == revnum; 
    }
};
