#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][3];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }

        int check = 1;

        while (check <= 3)
        {
            int maxDiscount = 0;
            int location = 101; 

            for (int i = 0; i < n; i++)
            {
                if (arr[i][1] == check)
                {
                    if (arr[i][2] > maxDiscount || (arr[i][2] == maxDiscount && arr[i][0] < location))
                    {
                        maxDiscount = arr[i][2];
                        location = arr[i][0];
                    }
                }
            }

            cout << maxDiscount << " " << location << endl;
            check++;
        }
    }

    return 0;
}