class Solution {
public:
    int minMaxDifference(int num) {
       string n="";
       string max="";
       string min="";
        while(num>0){
            n = to_string(num%10) + n;
            num = num/10;
        }
        max = n;
        min = n;
       int len = n.length();
        int i = 0;
        while(i<len && max[i]=='9'){
            i++;
        }
        for(int j = 0;j<len;j++){
            if(max[j]==n[i]){
                max[j]='9';
            }
        }
        i = 0;

        while(i<len && min[i]=='0'){
            i++;
        }
        for(int j = 0;j<len;j++){
            if(min[j]==n[i]){
                min[j]='0';
            }
        }
        int res = stoi(max)-stoi(min); 
        return res;
    }
};