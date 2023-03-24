class Solution {
public:
    int dfs(int node, int prnt, vector<pair<int,int>> adj[]){
        int count=0;
        for(auto a:adj[node]){
            if(a.first==prnt) continue;
            count+=a.second+dfs(a.first, node, adj);
        }
        return count;
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<pair<int, int>>adj[n];
        for(auto e: connections){
            adj[e[0]].push_back({e[1],1});
            adj[e[1]].push_back({e[0],0});
        }
        return dfs(0,-1, adj);
    }
};