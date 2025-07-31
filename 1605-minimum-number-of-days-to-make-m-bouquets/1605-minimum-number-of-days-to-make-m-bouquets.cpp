class Solution {
public: 
    int minDays(vector<int>& bloomDay, int m, int k) { 
        long long total = 1LL * m * k;
        int n = bloomDay.size(); 
        if(total > n) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low <= high) {
            int mid = (low + high) / 2;

            int cnt = 0, noofbouq = 0;
            for(int i = 0; i < n; i++) {
                if(bloomDay[i] <= mid) {
                    cnt++;
                    if(cnt == k) {
                        noofbouq++;
                        cnt = 0;
                    }
                } else {
                    cnt = 0;
                }
            }

            if(noofbouq >= m) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    } 
};
