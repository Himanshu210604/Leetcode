class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {   
        auto atMost = [&](int k) {
            if (k < 0) return 0;
            int l = 0, sum = 0, cnt = 0;
            for (int r = 0; r < nums.size(); r++) {
                sum += nums[r];
                while (sum > k) sum -= nums[l++];
                cnt += (r - l + 1);
            }
            return cnt;
        };
        return atMost(goal) - atMost(goal - 1);
    }
};
