class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxcount = 0;
        unordered_set<int> s;
        for (int num : nums) {
            s.insert(num);
        }
        for(auto num:s){
            if(s.find(num-1)!=s.end()) continue;
            int ser = 1;
            while(s.find(++num)!=s.end()) ser++;
            maxcount = max(maxcount,ser);
        }
    return maxcount;
    }
};
