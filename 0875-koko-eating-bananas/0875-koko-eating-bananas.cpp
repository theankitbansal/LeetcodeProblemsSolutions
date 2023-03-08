class Solution {
public:
    bool canKokoEatAllBananas(vector<int>&piles, int h, int k){
        long long time=0;
        for(int bananas: piles){
            time+=(bananas+k-1)/k;
        }
        if(time<=h)
            return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(), piles.end());
        while(start<=end){
            int mid=start+(end-start)/2;
            if(canKokoEatAllBananas(piles, h, mid)){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return start;
    }
};