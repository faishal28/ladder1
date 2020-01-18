
#include <iostream>

using namespace std;

int main()
{
	int n, count = 0, min, max;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	min = a[0];
	max = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			count++;
		}
		if(a[i] < min)
		{
			min = a[i];
			count++;
		}
	}
	cout << count << "\n";
}