class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0, sum, count;
        for(auto &num: nums){
            sum=0;
            count=0;
            for(int i=1; i*i<=num; i++){
                if(num%i==0){
                    if(num/i==i){
                        sum+=i;
                        count++;
                    }else{
                        sum+=i+(num/i);
                        count+=2;
                    }
                }
            }
            if(count==4) ans+=sum;
        }
        return ans;
    }
};