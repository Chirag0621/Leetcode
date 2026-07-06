class Solution {
public:
    bool check(int start, vector<vector<int>> &edges, vector<int> &vis, vector<int> &pathVis, vector<int> &ans) {
		vis[start] = 1;
		pathVis[start] = 1;
		
		for (auto it : edges[start]) {
			if (!vis[it]) {
				if (check(it, edges, vis, pathVis,ans) == true) {
					return true;
				}
			}
			else if (pathVis[it]) {
				return true;
			}
			
		}
        ans[start] = 1;
		pathVis[start] = 0;
		return false;
	}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> vis(V, 0);
		vector<int> pathVis(V, 0);
        vector<int> ans(V,0);
        vector<int> safenodes;
		for (int i = 0; i < V; i++) {
			if (!vis[i]) {
				check(i, graph, vis, pathVis, ans);
				
			}
			
		}

        for(int i = 0; i < V; i++){
            if(ans[i] == 1) safenodes.push_back(i);
        }
		
		return safenodes;
    }
};