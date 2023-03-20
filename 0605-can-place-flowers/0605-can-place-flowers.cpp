class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int pre=1;
        for(int i=0; i<f.size(); i++){
            if(pre==1 && f[i]==0){
                if(i+1<f.size() && f[i+1]==0){
                    pre=0;
                    n--;
                }else if(i+1==f.size()){
                    pre=0;
                    n--;
                }
            }
            else if(f[i]==0) pre=1;
            else pre=0;
        }
        return n<=0;
    }
};