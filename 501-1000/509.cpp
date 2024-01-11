class Solution {
public:
    string defangIPaddr(string address) {
        int size = address.length();
        for(int i = 0 ; i < address.length();i++){
            if(address[i] == '.'){
                address.replace(i,1,"[.]");
                i += 2;
            }
        }
        return address;
    }
};