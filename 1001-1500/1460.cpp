class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arra.end());

        int i=0;
        int j=0;
        while(i < arr.size()){
            if(arr[i] != target[j]){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }

};
