class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr=0;
        int start=0;
        int total=0;
        int diff=0;
        
        for(int i=0; i<gas.size(); i++){
            diff=gas[i]-cost[i];
            
            curr+=diff;
            total+=diff;
            if(curr<0){
                start=i+1;
                curr=0;
            }
        }
        if(total>=0){
            return start;
        }
        return -1;
    }
};