class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n1=spells.size();
        int n2=potions.size();
        
        sort(potions.begin(), potions.end());
        vector<int>res(n1,0);
        
        for(int i=0; i<n1; i++){
            double x=(double)success/spells[i];
            
            int idx=lower_bound(potions.begin(), potions.end(),x)-potions.begin();
            res[i]=n2-idx;
        }
        return res;
    }
};