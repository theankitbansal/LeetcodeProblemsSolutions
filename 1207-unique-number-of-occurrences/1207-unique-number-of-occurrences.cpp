class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>m;
        
        for(int i=0; i<arr.size();i++){
            m[arr[i]]++;
        }
        
        unordered_set<int>st;
        
        for(auto it: m){
            if(st.count(it.second)){
                return false;
            }
            st.insert(it.second);
        }
        return true;
        
        
    }
};