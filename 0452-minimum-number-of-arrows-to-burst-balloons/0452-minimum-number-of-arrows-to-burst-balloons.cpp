class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0) return 0;
        
        sort(points.begin(), points.end());
        
        int lastpoint=points[0][1];
        int res=1;
        
        for(auto i:points){
            if(i[0]>lastpoint){
                res++;
                lastpoint=i[1];
            }
            lastpoint=min(lastpoint, i[1]);
        }
        
        return res;
        
    }
};