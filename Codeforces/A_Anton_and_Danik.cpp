#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            sumA++;
        }
        else
        {
            sumB++;
        }
    }
    if(sumA > sumB)
        cout<<"Anton"<<endl;
    else if (sumA < sumB)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
}