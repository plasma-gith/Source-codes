#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    double mg = 28;
    while(t--)
    {
        int x;
        cin >> x;
        double sum = 0;
        for (int i = 1; i < x; i++)
        {
            double cg;
            cin >> cg;
            sum = sum + cg;
        }
        double ncg = 28 - sum;
        double ans = ncg / (8 - x + 1);
        if (ans <= 3.70)
        {
            cout << "YES" << endl;
            printf("%.2lf", ans);
        }
        else
        {
            cout << "NO" << endl;
        }
    }   
    
    return 0;
}