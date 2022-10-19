class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        //sort(m.begin(), m.end());
        int i=0;
        for(auto it:m){
            while(it.second--){
                nums[i++]=it.first;
            }
        }
       
    }
};