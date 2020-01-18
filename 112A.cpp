#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s1, s2;
	char c1, c2;
	int flag = 1;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.length(); i++)
	{
		c1 = tolower(s1[i]);
		c2 = tolower(s2[i]);
		if(c1 > c2)
		{
			cout << 1;
			flag = 0;
			break;
		}
		else if(c1 < c2)
		{
			cout << -1;
			flag = 0;
			break;
		}
	}
	if(flag)
		cout << 0;
	cout << "\n";
}