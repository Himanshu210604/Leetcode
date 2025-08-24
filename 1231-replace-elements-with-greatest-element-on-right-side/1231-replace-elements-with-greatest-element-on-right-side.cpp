class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxVal = -1;  // last element becomes -1
        for (int i = n - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = maxVal;
            if (temp > maxVal) maxVal = temp;
        }
        return arr;
    }
};
