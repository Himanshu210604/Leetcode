class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int low = 1, high = *max_element(nums.begin(),nums.end()) ; 
       int  n = nums.size() ; 
       while(low<=high) {
        int sum =0;
        int mid = (low+high)/2 ; 
        for(int  i = 0 ; i< n ; i++){
            sum+=(nums[i]+mid-1)/mid ; }
            if(sum<= threshold){
                high = mid-1 ; 
            }else {
                low=mid+1 ;
            }
        
       }
       return low ; 
    }
};