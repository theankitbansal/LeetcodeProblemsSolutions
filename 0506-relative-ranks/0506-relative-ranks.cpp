class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string>v(n);
        
        unordered_map<int, int>mp;
        
        for(int i=0; i<score.size(); i++){
            mp[score[i]]=i;
        }
        
        sort(score.begin(), score.end(), greater<int>());
        
        for(int i=0; i<n; i++){
            if(i==0){
                v[mp[score[i]]]="Gold Medal";
            }
            else if(i==1){
                v[mp[score[i]]]="Silver Medal";
            }else if(i==2){
                v[mp[score[i]]]="Bronze Medal";
            }else{
                v[mp[score[i]]]=to_string(i+1);
            }
        }
        return v;
    }
};