class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        int n=sat.size();
        sort(sat.begin(), sat.end(), greater<int>());
        vector<int>sum=sat;
        for(int i=1; i<n; i++){
            sum[i]+=sum[i-1];
            
        }
        int mx=0, curr=0;
        for(int i=0; i<n; i++){
            curr+=sum[i];
            mx=max(curr, mx);
        }
        return mx;
    }
};