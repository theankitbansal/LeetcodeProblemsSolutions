class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v(m+n);
        int i=0, j=0, k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                v[k++]=nums1[i++];
            }else if(nums1[i]>nums2[j]){
                v[k++]=nums2[j++];
            }else if(nums1[i]==nums2[j]){
                v[k++]=nums1[i++];
                v[k++]=nums2[j++];
            }
        }
        
        for(; i<m; i++){
            v[k++]=nums1[i];
        }
        
        for(; j<n; j++){
            v[k++]=nums2[j];
        }
        
        nums1=v;
        
        
        
    }
};