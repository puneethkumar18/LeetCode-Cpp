class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int k=0;
        int size = original.size();
        vector<vector<int>> ans;
        if((m*n) != size){
            return ans;
        }
       
        for(int i=0;i<m;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
               
                 temp.push_back(original[k]);
                 k++;
               
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
