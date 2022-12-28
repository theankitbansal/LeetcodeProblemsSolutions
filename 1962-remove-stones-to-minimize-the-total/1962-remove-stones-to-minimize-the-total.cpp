class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq(piles.begin(), piles.end());
        
        while(k--){
            int x=pq.top();
            pq.pop();
            int y=floor(x/2);
            pq.push(x-y);
        }
        
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        
        return sum;
        
    }
};