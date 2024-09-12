class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> ans;

        for(int i=0;i<queries.size();i++){
            int temp  = 0;
            int index = 0;
            int count = 0;
            while(queries[i] >= temp && index < nums.size()){
                count++;
                temp += nums[index];
                index++;
            }
            if(index  == nums.size() && temp <= queries[i]){
                ans.push_back(count);   
            }else{
                 ans.push_back(count-1);   
            }
                
        }
        return ans;
    }
};
