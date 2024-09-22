class comapator{
    public:
    bool operator()(pair<int,char> a,pair<int,char> b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> m;

        for(auto i:s){
            m[i]++;
        }

        priority_queue<pair<int,char>,vector<pair<int,char>>, comapator> heap;
        for(auto i:m){
            heap.push({i.second,i.first});
        }

        string ans = "";
        while(!heap.empty()){
            auto i = heap.top();
            ans.append(i.first,i.second);
            heap.pop();
        }
        return ans;
    }
};
