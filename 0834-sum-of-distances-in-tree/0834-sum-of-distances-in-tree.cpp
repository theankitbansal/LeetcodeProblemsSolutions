class Solution {
public:
    void dfs_count_subtree(vector<int>adj[], int sv, int parent, vector<int>&count_subtree, vector<int>&res){
        for(auto x:adj[sv]){
            if(x==parent){
                continue;
            }
            dfs_count_subtree(adj,x,sv,count_subtree, res);
            count_subtree[sv]+=count_subtree[x];
            res[sv]+=res[x]+count_subtree[x];
        }
        count_subtree[sv]+=1;
    }
    
    void dfs(vector<int>adj[], int sv, vector<int>&res, int parent, vector<int>&count_subtree, int n){
        for(auto x:adj[sv]){
            if(x==parent){
                continue;
            }
            res[x]=res[sv]+(n-2*count_subtree[x]);
            dfs(adj,x,res,sv,count_subtree,n);
        }
        
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(int i=0; i<edges.size(); i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>subtree(n, 0);
        vector<int> res(n,0);
        dfs_count_subtree(adj, 0, -1, subtree, res);
        dfs(adj,0,res,-1, subtree, n);
        return res;
    }
};