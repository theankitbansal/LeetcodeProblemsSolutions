class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int zsum=0;
        for(char i: s){
            if(i=='0')
                ++zsum;
        }
        
        int osum=0;
        int ans=zsum;
        
        for(char i:s){
            if(i=='1'){
                osum++;
            }else{
                zsum--;
            }
            if(ans>osum+zsum){
                ans=osum+zsum;
            }
        }
        return ans;
    }
};