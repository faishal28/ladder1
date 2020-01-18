
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n > 21 || n <= 10)
		cout << 0 << "\n";
	else if(n - 10 == 1 || n - 10 == 11)
		cout << 4 << "\n";
	else if(n - 10 == 10)
		cout << 15 << "\n";
	else
		cout << 4 << "\n";
}