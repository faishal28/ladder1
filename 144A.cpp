
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	//finding min and max
	int min = 0, max = 0;
	for (int i = 1; i < n; ++i)
	{
		if(a[i] > a[max])
			max = i;
		if(a[i] <= a[min])
			min = i;
	}
	//counting number of swaps
	if(min < max)
		cout << max + ((n - 1) - min) - 1 << "\n";
	else
		cout << max + ((n - 1) - min) << "\n";
}