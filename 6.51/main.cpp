#include <iostream>

using namespace std;

void f()
{
	cout << "1" << endl;
}

void f(int)
{
	cout << "2" << endl;
}

void f(int, int)
{
	cout << "3" << endl;
}

void f(double, double=3.14)
{
	cout << "4" << endl;
}

int main()
{
	//f(2.56, 42); it's an ambiguous call.
	f(42);//for void f(int).
	f(42, 0);//for void f(int, int)
	f(2.56, 3.14);//for void f(double, double)
	system("pause");
	return 0;
}