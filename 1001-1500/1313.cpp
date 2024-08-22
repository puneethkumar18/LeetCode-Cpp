class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int i=0;
        int size = nums.size();
        while(true){
            int freqIndex = 2*i;
            int valIndex = 2*i+1;
            if(valIndex > size ){
                break;
            }
            int freq = nums[freqIndex];
            int val = nums[valIndex];
            for(int i=0;i<freq;i++){
                ans.push_back(val);
            }
            i++;
        }
        return ans;
    }
};
