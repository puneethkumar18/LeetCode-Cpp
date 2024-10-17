class Solution {
public:
    void update(string temp,int index,int& ans){
        int i=0;
        while(i < index){
            if(temp[i] < temp[index]){
                swap(temp[i],temp[index]);
                if(temp > to_string(ans)){
                    ans = stoi(temp);
                   
                }
                swap(temp[i],temp[index]);
            }
            i++;
        }

    }
    int maximumSwap(int num) {
        string temp = to_string(num);
        
        int ans = num;
        int n = temp.length()-1;
        for(int i=n;i>=0;i--){
            update(temp,i,ans);
        }
    
        return ans;
    }
};
