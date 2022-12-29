class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        if(arr[0]!=1){
            arr[0]=1;
        }
        for(int i=1; i<arr.size(); i++){
            int x=abs(arr[i]-arr[i-1]);
            if(x<=1)
                continue;
            else
                arr[i]=arr[i]-x+1;
        }
        return arr[arr.size()-1];
    }
};