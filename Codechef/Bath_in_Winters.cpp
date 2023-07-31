#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, m;
        cin>>x>>y;
        m = x / (2 * y);
        if (m >= 0)
        {
            cout << m << endl;
        }
    }

    return 0;
}