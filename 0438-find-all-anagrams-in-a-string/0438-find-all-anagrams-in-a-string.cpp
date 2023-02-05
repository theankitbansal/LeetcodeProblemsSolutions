class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int slen=s.length();
        int plen=p.length();
        
        if(s.size()<p.size()) return {};
        
        vector<int>freqP(26,0);
        vector<int>window(26,0);
        
        for(int i=0; i<plen; i++){
            freqP[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        vector<int>ans;
        if(freqP==window) ans.push_back(0);
        for(int i=plen; i<slen; i++){
            window[s[i-plen]-'a']--;
            window[s[i]-'a']++;
            
            if(freqP==window) ans.push_back(i-plen+1);
        }
        return ans;
        
    }
};