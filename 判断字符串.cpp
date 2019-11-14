#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;


bool WordSort(vector<string> vs)
{
	for (int i = 1; i < vs.size(); i++)
	{
		if (strcmp(vs[i - 1].c_str(), vs[i].c_str()) >= 0)
		{
			return false;
		}
	}
	return true;
}

bool lengthSort(vector<string> vs)
{
	for (int i = 1; i < vs.size(); i++)
	{
		if (vs[i - 1].length() >= vs[i].length())
		{
			return false;
		}
	}
	return true;
}


int main2()
{
	int n;
	cin >> n;
	vector<string> vs(n);
	string s;
	getline(cin, s);
	vs[0] = s;
	for (int i = 0; i < n; i++)
	{
		getline(cin, s);
		vs[i] = s;
	}
	if (WordSort(vs) && !lengthSort(vs))
	{
		cout << "lexicographically" << endl;
	}
	if (lengthSort(vs) && !WordSort(vs))
	{
		cout << "lengths" << endl;
	}
	if (WordSort(vs) && lengthSort(vs))
	{
		cout << "both" << endl;
	}
	if (!WordSort(vs) && !lengthSort(vs))
	{
		cout << "none" << endl;
	}
 
	return 0;
}