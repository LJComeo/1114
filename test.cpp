#include <iostream>
#include <cstring>
using namespace std;

/*
class A
{
	int m_iVal;
public:
	A() :m_iVal(0){ test(); }
	virtual void func()
	{
		cout << m_iVal << ' ';

	}
	void test()
	{
		func();
	}
};

class B :public A
{
public:
	B()
	{
		test();
	}
	virtual void func()
	{
		
	}
};
*/


int main1()
{
	char *str1 = "a";
	char *str2 = "aa";
	cout << strcmp(str1, str2);

	return 0;
}