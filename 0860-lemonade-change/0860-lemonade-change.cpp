class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int changef=0;
        int changet=0;
        
        for(auto &i:bills){
            if(i==5) changef++;
            else if(i==10) changef--,changet++;
            else if(changet>0) changet--,changef--;
            else changef-=3;
            if(changef<0) return false;
        }
        return true;
    }
};