class Solution {
public:
    int maxDiff(int num) {
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
         if (n[0] != '1') {
            char target = n[0];
            for (int j = 0; j < len; j++)
                if (min[j] == target) min[j] = '1';
        } else {
            
            i = 1;
           while (i < len && (n[i] == '0' || n[i] == n[0])) 
            i++;
            if (i < len) {
                char target = n[i];
                for (int j = 0; j < len; j++)
                    if (min[j] == target) min[j] = '0';
            }
        }
        int res = stoi(max)-stoi(min); 
        return res; 
    }
};