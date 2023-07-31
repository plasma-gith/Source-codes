#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
	{
	    int x;
	    cin>>x;
	    int y = x % 3;
	    if (y == 0)
	        cout<<"NORMAL\n";
	    else if (y == 1)
	        cout<<"HUGE\n";
	    else
	        cout<<"SMALL\n";
	}
	return 0;
}
