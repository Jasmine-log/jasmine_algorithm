#include <iostream>

int recursive(int x)
{
    if (x == 0)
        return 0;
    if (x == 1 || x == 2)
        return 1;

    return recursive(x - 1) + recursive(x - 2);
}

int td[32] = {
    0,
};

int dp_topDown(int x)
{
    if (x == 0)
        return 0;
    if (x == 1 || x == 2)
        return 1;
    if (td[x] != 0)
        return td[x];

    return td[x] = dp_topDown(x - 1) + dp_topDown(x - 2);
}

int bu[32] = {
    0,
};

int dp_bottomUp(int n)
{
    bu[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        bu[i] = bu[i - 1] + bu[i - 2];
    }
    return bu[n];
}

int main()
{
    int n = 10;

    std::cout << "Recursive" << recursive(n) << std::endl;
    std::cout << "TopDown " << dp_topDown(n) << std::endl;
    std::cout << "BottomUp " << dp_bottomUp(n) << std::endl;

    return 0;
}