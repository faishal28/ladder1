
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int n = a.length();
	int c[n];
	for(int i = 0; i < n; i++)
	{
		if(a[i] == b[i])
			c[i] = 0;
		else
			c[i] = 1;
	}
	for (int i = 0; i < n; ++i)
		cout << c[i];
	cout << "\n";
}