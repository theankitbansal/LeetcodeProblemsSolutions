class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(nums.size()+1, 0);
        vector<int>v;
        
        for(int i=0; i<nums.size(); i++){
            arr[nums[i]]++;
        }
        
        for(int i=1; i<n+1; i++){
            if(arr[i]>1){
                v.push_back(i);
            }
        }
        
        for(int i=1;i<n+1; i++){
            if(arr[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};