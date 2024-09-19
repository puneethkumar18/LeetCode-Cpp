class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        map<int,bool> m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]] = true;
        }
        int i;
        for( i=1;i<=n;i++){
            if(m[i] == false){
                return i;
            }
        }
        return i;
    }
};
