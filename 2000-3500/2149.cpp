class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;

        for(auto i:nums){
            if(i > 0){
                even.push_back(i);
            }else{
                odd.push_back(i);
            }
        }
        int i=0;
        int j = 0;
        vector<int> ans;
        while(i<even.size() && j<odd.size()){
            ans.push_back(even[i++]);
            ans.push_back(odd[j++]);
           
        }
        while(i < even.size()){
            ans.push_back(even[i++]);
        }

        while(j < odd.size()){
            ans.push_back(odd[j++]);
        }

        return ans;
    }
};
