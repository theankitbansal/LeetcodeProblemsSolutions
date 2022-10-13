class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[1]>b[1];
    }
    
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int sum=0;
        for(auto box: boxTypes){
            int i=min(box[0], truckSize);
            sum+=i*box[1];
            truckSize-=i;
            if(truckSize==0) break;
        }
        return sum;
    }
};