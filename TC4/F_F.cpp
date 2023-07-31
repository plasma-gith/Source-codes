#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int hour, min;
        char ch;
        cin >> hour >> ch >> min;

        min = (60 - min) % 60;

        hour = 12 - hour;
        if (min != 0)
            hour--;

        hour = (12 - hour) % 12;
        if (hour == 0)
            hour = 12;
        cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << min << endl;
    }
    return 0;
}
