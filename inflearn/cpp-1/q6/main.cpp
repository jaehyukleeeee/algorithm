#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int num = 0, cnt = 0;

	cin >> s;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + (s[i] - 48);
		}
	}

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cnt++;
		}
	}

	cout << num << endl << cnt << endl;

	return 0;
}