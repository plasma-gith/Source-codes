#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sumA = 0, sumB = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if  (s[i] >= 'a' && s[i] <= 'z')
            sumA = sumA + 1;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            sumB = sumB + 1;
    }
    if (sumA >= sumB)
    {    
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
            else
                s[i] = s[i];
        }
        cout<<s<<endl;
    }
    else if (sumA < sumB)
    {    
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
            else
                s[i] = s[i];
        }
        cout<<s<<endl;
    }
}
