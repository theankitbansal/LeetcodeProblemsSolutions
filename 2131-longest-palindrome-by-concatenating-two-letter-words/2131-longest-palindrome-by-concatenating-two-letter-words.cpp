class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string, int>m;
        long long ans=0;
        for(string x:words){
            string y=x;
            reverse(y.begin(), y.end());
            if(m.find(y)!=m.end()){
                ans+=4;
                m[y]--;
                if(m[y]==0){
                    m.erase(y);
                }
            }else{
                m[x]++;
            }
        }
        for(auto x:m){
            if(x.first[0]==x.first[1]){
                ans+=2;
                break;
            }
        }
        return ans;
    }
};