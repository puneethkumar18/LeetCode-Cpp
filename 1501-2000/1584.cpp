class Solution {
public:
    int distance(int x1,int y1,int x2,int y2){
        return abs(abs(x1-x2)+abs(y1-y2));
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();

        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;

        vector<int> vis(n,0);

        for(int i=1;i<n;i++){
            int x1 = points[0][0];
            int y1 = points[0][1];
            int x2 = points[i][0];
            int y2 = points[i][1];
            
            int dist = distance(x1,y1,x2,y2);
            pq.push({dist,i});
        }
        vis[0] = 1;
        int res = 0;
        while(!pq.empty()){
            int node = pq.top().second;
            int wt  = pq.top().first;
            pq.pop();
            if(vis[node] == 1)continue;
            vis[node] = 1;
            res += wt;
            for(int i=0;i<n;i++){
                if(i != node){
                    int x1 = points[node][0];
                    int y1 = points[node][1];
                    int x2 = points[i][0];
                    int y2 = points[i][1];
                    int dist = distance(x1,y1,x2,y2);

                    pq.push({dist,i});
                }
            }
        }
        return res;
    }
};
