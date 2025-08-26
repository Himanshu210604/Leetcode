class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
         long cnt = 0 , sum = 0 ;  
        while(sum<neededApples) {
            cnt++  ;
            sum+=12LL*cnt*cnt ; 
        } 
         return cnt*8 ; 
       }
};