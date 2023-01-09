class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n=position.size();
        if(m==2){
            return position[n-1]-position[0];
        }
        
        int low=0;
        int high=position.back();
        
        while(low<high){
            int mid=low+(high-low)/2;
            int pivot=-1e9;
            int count=0;
            
            for(auto i:position){
                if(i-pivot>=mid+1){
                    pivot=i;
                    count++;
                }
                
            }
            if(count>=m) low=mid+1;
            else high=mid;
        }
        return low;
        
    }
};