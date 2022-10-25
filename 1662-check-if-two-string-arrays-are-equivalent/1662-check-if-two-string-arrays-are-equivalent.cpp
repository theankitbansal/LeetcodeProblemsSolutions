class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="";
        string str2="";
        for(auto x:word1)   str1+=x;
        for(auto x:word2)   str2+=x;
        if(str1==str2)  return true;
        return false;
        
    }
};