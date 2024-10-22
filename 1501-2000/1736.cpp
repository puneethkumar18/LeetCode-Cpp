class Solution {
public:
    string maximumTime(string time) {
        string hour = time.substr(0,2);
        string minute = time.substr(3,2);
        if(hour[0] == '?' && hour[1] == '?'){
            hour[0] = '2';
            hour[1] = '3';
        }
        if(hour[0] == '?'){
            if(hour[1]  < '4'){
                hour[0] = '2';
            }else{
                hour[0] = '1';
            }
        } 
        if(hour[1] == '?') {
            if(hour[0] == '2'){
                hour[1] = '3';
            }else{
                hour[1] = '9';
            }
        }
        if(minute[0] == '?'){
            minute[0] = '5';
        } 
        if(minute[1] == '?'){
            minute[1] = '9';
        }
        return hour+":"+minute;
    }
};
