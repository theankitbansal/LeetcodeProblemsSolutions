class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long>s;
        s.insert(1);
        long long ans;
        for(int i=1; i<=n; i++){
            ans=*s.begin();
            s.erase(ans);
            s.insert(ans*2);
            s.insert(ans*3);
            s.insert(ans*5);
        }
        return int(ans);
        
    }
};