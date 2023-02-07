class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int>mp;
        
        int i=0, j=0, res=0;
        while(j<fruits.size()){
            mp[fruits[j]]++;
            if(mp.size()<=2){
                int temp=0;
                for(auto &it:mp) temp+=it.second;
                res=max(res, temp);
            }
            else{
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                i++;
            }
            j++;
        }
        return res;
    }
};