class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int day = 1, load = 0;
            for (int w : weights) {
                if (load + w > mid) {
                    day++;
                    load = w;
                } else {
                    load += w;
                }
            }
            if (day <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
