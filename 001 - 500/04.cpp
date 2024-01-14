class Solution {
public:


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> merged ;
        int i = 0;
        int j = 0;
        while(i<size1 && j<size2){
            if(nums1[i] > nums2[j]){
                merged.push_back(nums2[j]);
                j++;
            }else{
                merged.push_back(nums1[i]);
                i++;
            }
        }
        while(i<size1){
            merged.push_back(nums1[i]);
            i++;
        }
        while(j<size2){
            merged.push_back(nums2[j]);
            j++;
        }
        int size = merged.size();
        int mid = size/2;
        if(size%2 == 0){
            return double(merged[mid]+merged[mid-1])/2;
        }
            return merged[mid];
    }
};
