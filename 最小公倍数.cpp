#include <iostream>
using namespace std;

int Min(int a, int b)
{
	if (a < b)
	{
		if (b % a == 0)
		{
			return b;
		}
		else
		{
			return a * b;
		}
	}
	else if (a > b)
	{
		if (a % b == 0)
		{
			return a;
		}
		else
		{
			return a * b;
		}
	}
	else
	{
		return a;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	int tmp = Min(a, b);
	cout << tmp << endl;


	return 0;
}