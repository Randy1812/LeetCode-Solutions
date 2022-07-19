class Solution {
public:
    void solve(vector<vector<int>>& graph, vector<vector<int>>& res, vector<int>& path, int target, int curr){
        if(curr==target){
            res.push_back(path);
            return;
        }
        for(auto i:graph[curr]){
            path.push_back(i);
            solve(graph,res,path,target,i);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> path={0};
        solve(graph,res,path,graph.size()-1,0);
        return res;
    }
};
