class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>mp;
        for(int i=0; i<t.length(); i++){
            mp[t[i]]++;
        }
        int count=0;
        int low=0;
        int minlength=INT_MAX;
        int minstart=0;
        
        for(int i=0; i<s.length(); i++){
            if(mp[s[i]]>0){
                count++;
            }
            mp[s[i]]--;
            
            if(count==t.length()){
                while(low<i && mp[s[low]]<0){
                    mp[s[low]]++;
                    low++;
                }
                if(minlength>i-low){
                    minlength=i-(minstart=low)+1;
                }
                mp[s[low++]]++;
                count--;
            }
        }
        return minlength==INT_MAX ? "" :s.substr(minstart, minlength);
        
        
    }
};