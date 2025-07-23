class Solution {
  public:
  
    void dfs(int node, vector<int> &ls, vector<int>&vis,vector<vector<int>> &adj ){
        ls.push_back(node);
        vis[node]=1;
        
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,ls,vis,adj);
            }
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> ls;
        vector<int> vis(n,0);
        dfs(0,ls,vis,adj);
        return ls;
    }
};