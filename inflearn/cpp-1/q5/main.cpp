#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int genderNum, year, age;

	cin >> s;

	genderNum = s[7] - 48;

	if (genderNum == 1 || genderNum == 2)
	{
		year = 1900;
	}
	else
	{
		year = 2000;
	}

	age = 2019 - (year + ((s[0] - 48) * 10 + (s[1] - 48))) + 1;

	cout << age;

	if (genderNum == 1 || genderNum == 3)
	{
		cout << " M" << endl;
	}
	else if (genderNum == 2 || genderNum == 4)
	{
		cout << " W" << endl;
	}

	return 0;
}