#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = 0;
        cin >> n;
        int i = 1;
        while (i <= n)
        {
            int w, q, temp = 0;
            cin >> w >> q;
            if (w <= 10 && q != temp)
            {
                if (q > max)
                    max = i;
            }
            temp = q;
            i++;
        }
        cout << max << endl;
    }
    return 0;
}
