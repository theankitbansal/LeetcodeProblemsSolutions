class Solution {
public:
    static bool cmp(pair<int, int>&a, pair<int, int>&b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second<b.second;
    }
    
    
    int power(int n){
        int count=0;
        while(n>1){
            if(n%2==0){
                n=n/2;
            }else{
                n=3*n+1;
            }
            count++;
        }
        return count;
    }
    
    
    
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>>v;
        for(int i=lo; i<=hi; i++){
            v.push_back(make_pair(i, power(i)));
        }
        
        sort(v.begin(),v.end(), cmp);
        
       // for(int i=v.begin(), i!=v.end(); i++){
            
      //  }
        
        return v[k-1].first;
        
    }
};