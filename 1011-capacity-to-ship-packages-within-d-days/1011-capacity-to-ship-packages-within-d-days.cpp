class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(), weights.end());
        int high=accumulate(weights.begin(), weights.end(),0);
        
        while(low<high){
            int mid=low+(high-low)/2;
            int curr=0, need=1;
            for(int w:weights){
                if(curr+w>mid){
                    curr=0;
                    need++;
                }
                curr+=w;
            }
            if(need<=days){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
        
        
    }
};