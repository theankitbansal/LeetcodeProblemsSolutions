class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        vector<int>d1(n, INT_MAX), d2(n, INT_MAX);
        bfs(d1, edges, node1);
        bfs(d2, edges, node2);
        
        int node=-1, ans=INT_MAX;
        for(int i=0; i<n; i++){
            if(ans>max(d1[i],d2[i])){
                node=i;
                ans=max(d1[i], d2[i]);
            }
        }
        return node;
    }
    
    void bfs(vector<int>&d, vector<int>&edges,int src){
        queue<int>q;
        d[src]=0;
        q.push(src);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            int n=edges[curr];
            if(n!=-1 && d[n]==INT_MAX){
                q.push(n);
                d[n]=d[curr]+1;
            }
        }
    }
    
    
};