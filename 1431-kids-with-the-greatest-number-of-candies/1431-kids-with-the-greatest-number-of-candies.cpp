class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=(int)candies.size();
        int mx=*max_element(candies.begin(), candies.end());
        vector<bool>res(n, false);
        
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies>=mx){
                res[i]=true;
            }
        }
        return res;
    }
};