class Solution {
public:
    int ans=0;
    bool isunique(string &s){
        vector<int>v(26,0);
        for(int i=0; i<s.size(); i++){
            if(v[s[i]-'a']==1){
                return false;
            }
            v[s[i]-'a']++;
        }
        return true;
    }
    
    void backtrack(vector<string>&arr, int idx, string currS){
        if(!isunique(currS)){
            return;
        }
        int temp=currS.size();
        ans=max(ans, temp);
        if(idx>=arr.size())
            return;
        
        
        backtrack(arr, idx+1, currS+arr[idx]);
        backtrack(arr, idx+1, currS);
    }
    
    int maxLength(vector<string>& arr) {
        backtrack(arr, 0, "");
        return ans;
    }
};