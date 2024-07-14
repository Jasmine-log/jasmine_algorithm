#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<vector<int>> v2;
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        v.push_back(i+1);
    }

    v2.push_back(v);
    v2.push_back(v);

    //v={1, 2, 3}
    //v2={{1, 2, 3}, {1, 2, 3}}
    cout << v[2] << endl;
    cout << v2[1][1] << endl;
    
        return 0;
    }