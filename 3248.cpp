class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0;
        int j = 0;
        map<string, int> m;
        m["RIGHT"] = 1;
        m["DOWN"] = 2;
        m["UP"] = 3;
        m["LEFT"] = 4;

        for (int k = 0; k < commands.size(); k++) {
            switch (m[commands[k]]) {
            case 1:
                j++;
                break;
            case 2:
                i++;
                break;
            case 3:
                i--;
                break;
            case 4:
                j--;
                break;
            default:
                break;
            }
        }
        return (i * n) + j;
    }
};
