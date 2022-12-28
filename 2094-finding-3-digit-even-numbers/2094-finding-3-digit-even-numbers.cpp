class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int freq[10]={0};
        
        vector<int>ans;
        
        for(auto di:digits) freq[di]++;
        
        for(int i=100; i<=999; i+=2){
            int ones=i%10;
            int tens=(i/10)%10;
            int hund=i/100;
            
            freq[ones]--;
            freq[tens]--;
            freq[hund]--;
            
            if(freq[ones]>=0 && freq[tens]>=0 && freq[hund]>=0){
                ans.push_back(i);
            }
            
            freq[ones]++;
            freq[tens]++;
            freq[hund]++;
        }
        
        return ans;
    }
};