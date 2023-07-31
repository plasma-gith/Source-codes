#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int countm = 0, countmr = 0, countmmiss = 0, countmrmiss = 0;
    while (t--)
    {
        string a;
        getline(cin, a);

        if (a == "Messi goal")
        {
            countm++;
        }
        else if (a == "Messi missed")
        {
            countmmiss++;
        }
        else if (a == "Martinez goal")
        {
            countmr++;
        }
        else if (a == "Martinez missed")
        {
            countmrmiss++;
        }
    }
    cout << countm << countmr << countmmiss << countmrmiss <<  endl;
    if (countm > countmr)
    {
        cout << "Messi" << endl;
    }
    else if (countmr > countm)
    {
        cout << "Martinez" << endl;
    }
    else
    {
        if (countmmiss < countmrmiss)
        {
            cout << "Messi" << endl;
        }
        else if (countmmiss > countmrmiss)
        {
            cout << "Martinez" << endl;
        }
        else
        {
            cout << "Messi" << endl;
        }
    }

    return 0;
}