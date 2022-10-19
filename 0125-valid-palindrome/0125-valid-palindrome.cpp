class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" "){
            return true;
        }
        
        string res;
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                res+=(s[i]+32);
            }
            else if(s[i]>='a' && s[i]<='z'){
                res+=s[i];
            }else if(s[i]>=48 && s[i]<=57){
                res+=s[i];
            }
        }
        
       /* int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }else{
                i++;
                j--;
            }
            
        }
        return true;*/
        
        string y=res;
        reverse(y.begin(), y.end());
        return y==res;
        
    }
};