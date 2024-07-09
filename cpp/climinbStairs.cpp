class Solution
{
public:
    int memo[46] = {0};

    int climbing_TopDown(int n)
    {
        if (n <= 1)
            return 1;

        if (memo[n] != 0)
            return memo[n];

        return memo[n] = climbing_TopDown(n - 1) + climbing_TopDown(n - 2);
    }

    int climbing_BottomUp(int n)
    {

        int table[46] = {0};

        if (n == 0 || n == 1)
            return 1;
        // n=0 reutnr 1 becuase 2= 1+1 or 2
        table[0] = 1;
        table[1] = 1;
        for (int i = 02; i <= n; i++)
        {
            table[i] = table[i - 1] + table[i - 2];
        }
        return table[n];
    }
    int climbStairs(int n)
    {

        return 0;
        //return climbing_BottomUp(n);
        //return climbing_TopDown(n);
    }
};