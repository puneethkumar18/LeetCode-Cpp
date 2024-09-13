class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> st;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                long long temp = (long long)target-(long long)nums[i]-(long long)nums[j];
                int k = j+1;
                int l = n-1;
                while( k < l){
                    int sum = nums[k]+nums[l];
                    if(sum == temp){
                        vector<int> tmp = {nums[i],nums[j],nums[k],nums[l]};
                        st.insert(tmp);
                        k++;
                        l--;
                    }else if(sum > temp){
                        l--;
                    }else{
                        k++;
                    }
                }
            }
        }

        for(auto i:st){
            ans.push_back(i);
        }

        return ans;
    }
};
