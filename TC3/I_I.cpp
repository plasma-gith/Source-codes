#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, cases = 1, n;
    cin>>t;
    getchar();
    while(t--)
    {
        int step = 0;
        string s;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'd' || s[i] == 'g' || s[i] == 'j' || s[i] == 'm' || s[i] == 'p' || s[i] == 't' || s[i] == 'w' || s[i] == ' ')
            {
                step = step + 1;
            }
            else if (s[i] == 'b' || s[i] == 'e' || s[i] == 'h' || s[i] == 'k' || s[i] == 'n' || s[i] == 'q' || s[i] == 'u' || s[i] == 'x')
            {
                step = step + 2;
            }
            else if (s[i] == 'c' || s[i] == 'f' || s[i] == 'i' || s[i] == 'l' || s[i] == 'o' || s[i] == 'r' || s[i] == 'v' || s[i] == 'y')
            {
                step = step + 3;
            }
            else if (s[i] == 's' || s[i] == 'z')
            {
                step = step + 4;
            }
        }
        std::cout<<"Case #"<<cases<<": "<<step<<endl;
        cases++;
    }
    return 0;
}