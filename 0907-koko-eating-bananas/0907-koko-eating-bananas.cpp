class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     int low = 1 ; 
 int high = *max_element(piles.begin(), piles.end()); 
     while(low<=high) {
        int mid= (low+high)/2 ;  
        int n = piles.size() ; 
        long long time = 0 ; 
        for(int i = 0 ; i< n ; i++) {
            time+=(long long)(piles[i] + mid -1)/mid ; 
        } 
        if(time<=h) {
            high=mid-1 ; 
        } 
        else {low=mid+1 ;}
     } 
     return low ; 
    }
};