class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(2,0);
        int size1 = nums1.size();
        int size2 = nums2.size();
        map<int,int> num1;
        for(int i=0;i<size1;i++){
           num1[nums1[i]]++;
        }
        map<int,bool> visited;
        for(int i=0;i<size2;i++){
            if( num1[nums2[i]] != 0 ){
               if(!visited[nums2[i]]){
                 ans[0] += num1[nums2[i]];
               }
                ans[1]++;
                visited[nums2[i]] = true;
            }
        }
        return ans;
    }
};
