#include <iostream>

using namespace std;

int main()
{
	int n, min, max = 0;
	int age = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> age;

		if (i == 0 || age < min)
		{
			min = age;
		}
		else if (age > max)
		{
			max = age;
		}
	}

	cout << max - min << endl;

	return 0;
}