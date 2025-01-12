class Solution {
public:
    void add(set<int>& arr,int range,int i,int n){
        
        while(range != 0){
            
            if(i-range > -1){
                arr.insert((i-range));
            }
            if(i+range < n){
                arr.insert((i+range));
            }
            range--;
        }
        
        
    }
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == key){
                ans.insert(i);
                add(ans,k,i,n);
            }
        }
        
        return vector<int> (ans.begin(),ans.end());
    }
};
