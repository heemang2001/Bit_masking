#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int X;
int Answer;

int main()
{
	cin >> X;

	while (1)
	{
		if (X <= 0)
		{
			break;
		}

		if (X % 2 == 1)
		{
			Answer++;
		}

		X /= 2;
	}

	cout << Answer << '\n';

	return 0;
}