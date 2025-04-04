class Solution {
public:
    long long factorial(int a,int b,int c){
        long long f = b+1;
        long long res = 1;
        long long d = c;
        for(;f<=a;f++){
            res = res * f;
            if(d>=1 && res%d==0){
            res = res/d;
            d--;
            }
        }
        while(d>1){
            res/=d;
            d--;
        }
      
        return res;
    }
    int uniquePaths(int m, int n) {
        int j = m+n-2;
        int k = min(m-1,n-1);
        int l = max(m-1,n-1);
      long long res = factorial(j,l,k);
      return (int)res;
    }
};