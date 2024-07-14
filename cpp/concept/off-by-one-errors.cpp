#include <iostream>
#include <string>
using namespace std;

int main()
{

    string fruit_str[5];
    int size=5;
    string fruit_name="banana";
    
    for (int i = 0; i < fruit_name.length(); i++)
    {
        fruit_str[i]=fruit_name[i];
        cout << i << ":" << fruit_str[i] << endl;  
    }
    
    //string str = "Hello, jasmine!";

    //int n;
    //n = str.length()-1;
    //cout<<n<<endl;
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout << str[i];
    // }
    // cout << "\n";

    // for (int i = 0; i < n; ++i)
    // {
    //     cout << str[i];
    // }
    // cout << "\n";

    // for (int i = 1; i < n; i++)
    // {
    //     cout << str[i];
    // }
    // cout << "\n";

    // for (int i = 1; i < n; ++i)
    // {
    //     cout << str[i];
    // }
    // cout << "\n";

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << str[i];
    // }
    // cout << "\n";

    // for (int i = 0; i <= n; ++i)
    // {
    //     cout << str[i];
    // }
    // cout << "\n";

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << str[i];
    // }
    // cout << "\n";

    // for (int i = 1; i <= n; ++i)
    // {
    //     cout << str[i];
    // }
    // cout << "\n";

    return 0;
}