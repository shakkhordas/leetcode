class Solution {
public:
    long long int ways[50];
    void generate (int n) {
        ways[0] = 0;
        ways[1] = 1;
        for (int i=2; i<=n+2; i++)
            ways[i] = ways[i-1] + ways[i-2];
    }
    long long int climbStairs(int n) {
        generate(n);
        return ways[n+1];
    }
};
