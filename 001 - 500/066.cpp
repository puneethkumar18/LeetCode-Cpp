class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        string str = "";
        for(int it : digits){
            str += to_string(it);
        }
        int carry = 0;
        int digit = str[str.size()-1]-'0';
        digit = digit+1;
        carry = digit/10;
        digit = digit%10;
        ans.push_back(digit);
        for(int i=str.size()-2;i>=0;i--){
            digit = str[i]-'0';
            digit += carry;
            carry = digit/10;
            digit = digit%10;
            ans.push_back(digit);
        }

        if(carry != 0)ans.push_back(carry);
        cout<<str<<endl;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
