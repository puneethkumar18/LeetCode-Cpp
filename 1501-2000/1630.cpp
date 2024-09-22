class Solution {
public:
    bool check(vector<int> arr){
        if(arr.size() <= 2){
            return true;
        }   
        sort(arr.rbegin(),arr.rend());
        int temp = arr[1] -  arr[0];
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i+1] - arr[i] != temp){
                return false;
            }
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int a=0;
        vector<bool> ans;
        for(int i=0;i<l.size();i++){
            ans.push_back(check(vector<int> (nums.begin()+l[i],nums.begin()+r[i]+1)));
        }
        return ans;
    }
};
