class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> result;
        while( s.size()%k!=0){
            s= s+fill;
        }
        int i =0;
        while(i+k-1<s.size()){
            result.push_back(s.substr(i,k));
            i+=k;
        }
    return result;
    }
};