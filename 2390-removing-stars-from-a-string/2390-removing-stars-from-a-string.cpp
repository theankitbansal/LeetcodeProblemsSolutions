class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        
        for(int i=0; i<s.size(); i++){
            char curr=s[i];
            if(curr=='*'){
                st.pop();
            }else{
                st.push(curr);
            }
        }
        
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};