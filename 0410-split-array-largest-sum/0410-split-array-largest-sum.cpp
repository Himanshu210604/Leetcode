class Solution {
public:
    int splitArray(vector<int>& arr, int k) {
        int n = arr.size();
        int start = *max_element(arr.begin(), arr.end());
        int end = 0, ans = end;
        for (int i = 0; i < n; i++) {
            end += arr[i];
        }
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int count = 1, currentSum = 0;
            for (int i = 0; i < n; i++) {
                if (currentSum + arr[i] > mid) {
                    count++;
                    currentSum = arr[i];
                } 
                else currentSum += arr[i];
            }

            if (count <= k) {
                ans = mid;
                end = mid - 1;
            } 
            else start = mid + 1;
        }
        return ans;
    }
};