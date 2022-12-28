class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>num(n);
        
        for(int i=0; i<n;i++){
            num[i]=nums[i];
        }
        
        for(int i=0; i<n; i++){
            int x=(i+k)%n;
            nums[x]=num[i];
        }
    }
};