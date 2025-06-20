class Solution {
public:
    int maxDistance(string str, int k) {
        int v = 0, h = 0;
        int ans = 0;

        for (int i = 0; i < str.size(); ++i) {
            char a = str[i];
            if (a == 'N')      ++v;
            else if (a == 'S') --v;
            else if (a == 'E') ++h;
            else /* 'W' */    --h;

            int curr = abs(v) + abs(h);
            int possible = curr + min(2*k, i + 1-curr);
            ans = max(ans, possible);
        }

        return ans;
    }
};
