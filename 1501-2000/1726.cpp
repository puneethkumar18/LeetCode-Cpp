class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<long,int > mp;

        int n = nums.size();

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                long product = nums[i]*nums[j];
                mp[product]++;
            }
        }
        int cnt = 0;
        for(auto i:mp){
            int count = i.second;
            if(count > 1){
                int pairs = count * (count - 1) / 2; 
                cnt += pairs * 8; 
            }
        }
        return cnt;
    }
};
