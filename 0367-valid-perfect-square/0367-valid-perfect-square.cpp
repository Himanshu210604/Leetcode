class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        
        int low = 1, high = num / 2;
        while (low <= high) {
            long mid = low + (high - low) / 2;
            long square = mid * mid;
            
            if (square > num) {
                high = mid - 1;
            } 
            else if (square < num) {
                low = mid + 1;
            } 
            else {
                return true;
            }
        }
        return false;
    }
};
