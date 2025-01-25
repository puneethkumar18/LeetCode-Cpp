class Solution {
public:
    int rev(int n){
        int r=0;
        while(n>0){
            r *= 10;
            r += (n%10);
            n /= 10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();

        for(int i=0;i<n;i++){
            st.insert(nums[i]);
            cout<<nums[i]<<" -> "<<rev(nums[i])<<endl;
            st.insert(rev(nums[i]));
        }
        return st.size();
    }
};
