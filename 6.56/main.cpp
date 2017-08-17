#include <iostream>
#include <vector>
#include "def.h"

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a, b;
	int(*pf)(int, int);
	vector<decltype(pf)> v1;
	pf = add;
	v1.push_back(add);
	v1.push_back(minus);
	v1.push_back(muilty);
	v1.push_back(divide);
	cin >> a >> b;
	cout << "the addition of the two numbers is " << (*v1[0])(a, b) << endl;
	cout << "the diffefence of the two numbers is " << v1[1](a, b) << endl;	cout << "the product of the two numbers is " << v1[2](a, b) << endl;	cout << "the division of the two numbers is " << v1[3](a, b) << endl;
	system("pause");
	return 0;
}