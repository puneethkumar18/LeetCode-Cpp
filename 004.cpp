class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int i = 0,j=0,k=0;
        int size1 = nums1.size(), size2 = nums2.size();
        vector<int> temp(size1+size2);
        
        
        while(i < size1 and j < size2){
            
            if(nums1[i] < nums2[j]){
                
                temp[k] = nums1[i];
                k++;
                i++;
            }
            else{
                
                temp[k] = nums2[j];
                k++;
                j++;
            }
            
        }
    
            while(i != size1){
                
                temp[k] = nums1[i];
                i++;
                k++;
            }
            while(j != size2 ){
                temp[k] = nums2[j];
                j++;
                k++;
            }

            
            int index = k / 2;
            
            if(k & 1){
                return temp[index];
            }
            else{

                return float(temp[index]+temp[index-1])/2;
            }

        
    }
    
};